import pygame
import random
pygame.init()
screen = pygame.display.set_mode((800, 800))
screen.fill((255, 255, 255))
pygame.display.set_caption("Silly Shapes")

class Butters():
    def __init__(self,x,y):
        self.xpos = x
        self.ypos = y
        
    def draw(self):
    
        pygame.draw.circle(screen, (150,10,250), (self.xpos+125, self.ypos+110), 40, 0)
    
        pygame.draw.circle(screen, (150,10,250), (self.xpos+25, self.ypos+110), 40, 0)
    
        pygame.draw.circle(screen, (100,10,200), (self.xpos+25, self.ypos+50), 60, 0)
    
        pygame.draw.circle(screen, (100,10,200), (self.xpos+125, self.ypos+50), 60, 0)
    
        pygame.draw.line(screen,(0,0,0),(self.xpos+80, self.ypos),(self.xpos+110,self.ypos-40),(5))
    
        pygame.draw.line(screen,(0,0,0),(self.xpos+70, self.ypos),(self.xpos+40,self.ypos-40),(5))
    
        pygame.draw.ellipse(screen, (0,255,0),(self.xpos+50, self.ypos-10, 50, 180))
    
        pygame.draw.arc(screen, (0,200,100), [self.xpos+30, self.ypos, 90, 100], (4*3.14)/3, (5*3.14)/3, 5)
    
        pygame.draw.arc(screen, (0,200,100), [self.xpos+30, self.ypos-20, 90, 100], (4*3.14)/3, (5*3.14)/3, 5)
    
        pygame.draw.arc(screen, (0,200,100), [self.xpos+30, self.ypos-40, 90, 100], (4*3.14)/3, (5*3.14)/3, 5)
    
        pygame.draw.arc(screen, (0,200,100), [self.xpos+30, self.ypos-60, 90, 100], (4*3.14)/3, (5*3.14)/3, 5)
    
        pygame.draw.arc(screen, (0,200,100), [self.xpos+30, self.ypos+20, 90, 100], (4*3.14)/3, (5*3.14)/3, 5)



Butterbag = list()
for i in range(6):
    Butterbag.append(Butters(random.randrange(700),random.randrange(700)))
    
    
while True: 
    for Butters in Butterbag:
        Butters.draw()
    pygame.display.flip()

pygame.quit()
