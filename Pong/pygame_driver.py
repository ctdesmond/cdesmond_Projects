import pygame
import os

def main():

    pygame.init()

    surface_sz = 600

    main_surface = pygame.display.set_mode([surface_sz, surface_sz])

    ball = pygame.image.load(os.path.join('Pong','ball.png')).convert()

    small_rect = (300, 300, 100, 100)
    rect_color = (0, 128, 255)
    white = (255,255,255)
    black = (0,0,0)

    while True:
        ev = pygame.event.poll()
        if ev.type == pygame.QUIT:
            break

        main_surface.fill(white)

        main_surface.fill(rect_color,small_rect)

        main_surface.blit(ball, (100, 120))

        pygame.display.flip()

    pygame.quit()

main()
