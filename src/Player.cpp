/* Rawr Rinth v1, May 2012, Rachel J. Morris - www.moosader.com */

#include "Player.h"

Player::Player()
{
    m_speed = 5;
    m_stats.hp = 1000; // TEMP
}

void Player::Update()
{
    Character::Update();
}
