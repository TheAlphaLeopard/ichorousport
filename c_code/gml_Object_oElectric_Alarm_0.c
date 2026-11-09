// gml_Object_oElectric_Alarm_0 @ 0x140925d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oElectric_Alarm_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  double local_160;
  undefined4 local_158;
  undefined4 local_154;
  double local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_190 = "gml_Object_oEffectSpurt_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  uVar10 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  bVar8 = 0xff;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_174 = 0xffffff;
  local_180 = 0;
  local_188 = 2;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  if (puVar5 != &local_c8) {
    local_1c8 = (longlong *)*puVar5;
    uStack_1c0 = *(undefined4 *)(puVar5 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1c8);
  }
  local_88 = &local_c8;
  ppuVar11 = &local_88;
  uVar9 = CONCAT44(uVar10,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_180,1,uVar9,ppuVar11);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_188 = 4;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_188 = 5;
  }
  else {
    local_188 = 10;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419efcd8);
    uVar2 = FUN_140e851f0(uVar6,uVar7,DAT_141955260,1);
    bVar8 = 0xff;
    if (uVar2 < 0x80000000) {
      local_188 = 0xc;
      uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a067b8);
      uStack_1bc = 0;
      local_1c8 = (longlong *)&DAT_bff0000000000000;
      FUN_140042560(uVar6,&local_1c8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_188 = 0xe;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a067b8);
      uStack_1bc = 0;
      local_1c8 = (longlong *)&DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(uVar6,&local_1c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_d8 = (double)FUN_140e794b0(0,0x4046800000000000);
      local_d8 = local_d8 + (double)(byte)((iVar3 == 0) * -0x4c);
      bVar8 = 0;
      uStack_cc = 0;
      local_188 = 0x10;
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      local_180 = 0;
      local_178 = 0;
      local_174 = 5;
      uStack_1bc = 6;
      local_1c8 = local_res8;
      uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_150,uVar9,uVar12);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = 6;
      local_1c8 = local_res8;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_160,uVar9,uVar12 & 0xffffffffffffff00
                   );
      uVar10 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = (longlong *)FUN_140e794b0(0);
      uStack_1bc = 0;
      local_res18 = 1;
      FUN_140042560(&local_1c8,uVar6);
      uStack_1ac = local_144;
      uStack_1b0 = local_148;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_150;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_150);
      }
      local_res18 = 3;
      FUN_1400460e0(&local_1b8,&local_1c8);
      local_1a8 = (undefined4)local_1b8;
      uStack_1a4 = local_1b8._4_4_;
      uStack_1a0 = uStack_1b0;
      uStack_19c = uStack_1ac;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_1a8);
      local_res18 = 1;
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_res18 = 0;
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_88 = &local_c8;
      FUN_140e794b0(0);
      uStack_1ac = local_154;
      uStack_1b0 = local_158;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_160;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_160);
      }
      local_res18 = 4;
      FUN_140162c50(&local_1b8);
      local_1a8 = (undefined4)local_1b8;
      uStack_1a4 = local_1b8._4_4_;
      uStack_1a0 = uStack_1b0;
      uStack_19c = uStack_1ac;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1a8);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_80 = local_b8;
      local_1a8 = _DAT_141dd85a8;
      uStack_1a4 = uRam0000000141dd85ac;
      uStack_1a0 = uRam0000000141dd85b0;
      uStack_19c = DAT_141dd85b4;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1a8);
      local_78 = local_a8;
      uStack_1bc = 0xf;
      local_1c8 = (longlong *)0x10000000000012d;
      local_1a8 = 0x12d;
      uStack_1a4 = 0x1000000;
      uStack_1a0 = uStack_1c0;
      uStack_19c = 0xf;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1a8);
      local_70 = local_98;
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_180,4,CONCAT44(uVar10,DAT_141a0a7c8),
                            &local_88);
      iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar6);
      if (0 < iVar3) {
        local_1b8 = local_d8;
        uStack_1b0 = uStack_d0;
        uStack_1ac = uStack_cc;
        do {
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a067b8);
          local_188 = 0x12;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_141a067b8);
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x100000100000062;
          local_1a8 = 0x62;
          uStack_1a4 = 0x1000001;
          uStack_1a0 = uStack_1c0;
          uStack_19c = 0xf;
          if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          FUN_140041b80(&local_110,&local_1a8);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_110);
          local_188 = 0x13;
          puVar5 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a067b8);
          if (puVar5 != &local_170) {
            local_1a8 = *(undefined4 *)puVar5;
            uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_1a0 = *(undefined4 *)(puVar5 + 1);
            uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_170);
            }
            FUN_140041b80(&local_170,&local_1a8);
          }
          FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_170);
          local_188 = 0x15;
          if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_120);
          }
          FUN_140041b80(&local_120,&local_1b8);
          FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_120);
          cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_68,&local_res8,&local_res10);
      local_188 = 0x19;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      if (local_58 != 0) {
        FUN_140e4cd60();
      }
    }
    local_188 = 0x1d;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_e8,local_res8,local_res10);
    local_1a8 = (undefined4)local_e8;
    uStack_1a4 = local_e8._4_4_;
    uStack_1a0 = uStack_e0;
    uStack_19c = uStack_dc;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_1a8);
    FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_130);
    local_188 = 0x1e;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    FUN_140e87170(uVar6,DAT_1419fe158,0x80000000,&local_f8,local_res8,local_res10);
    local_1a8 = (undefined4)local_f8;
    uStack_1a4 = local_f8._4_4_;
    uStack_1a0 = uStack_f0;
    uStack_19c = uStack_ec;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_1a8);
    FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_140);
    local_188 = 0x20;
    uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    FUN_140e609c0(local_res8);
    FUN_1400460e0(uVar6,uVar4);
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

