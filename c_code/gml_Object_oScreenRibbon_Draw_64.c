// gml_Object_oScreenRibbon_Draw_64 @ 0x140d66fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oScreenRibbon_Draw_64(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 uVar14;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_f0 = "gml_Object_oScreenRibbon_Step_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_158,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_e8 = 2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  local_fc = 0;
  local_108 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_108,DAT_141955260,0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 == 0) {
    local_e8 = 4;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar14 = (undefined4)((ulonglong)pcVar11 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff008);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar5 != &local_158) {
      local_178 = (longlong *)*puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
    local_d0 = &local_158;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7684,_DAT_141dc7680);
    uStack_170 = uRam0000000141dc7688;
    uStack_16c = uRam0000000141dc768c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_c8 = &local_148;
    if (puVar6 != &local_138) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    local_c0 = &local_138;
    FUN_140e609c0(param_1);
    uVar4 = CONCAT44(uVar14,DAT_141a00c58);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar4,&local_d0);
    uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar8 != puVar7) {
      local_178 = (longlong *)*puVar8;
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_178);
    }
    FUN_140e60910(1);
    local_e8 = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if (puVar7 != &local_158) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
    local_d0 = &local_158;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7684,_DAT_141dc7680);
    uStack_170 = uRam0000000141dc7688;
    uStack_16c = uRam0000000141dc768c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_c8 = &local_148;
    if (puVar6 != &local_138) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    local_c0 = &local_138;
    FUN_140e609c0(param_1);
    uVar4 = CONCAT44(uVar14,DAT_141a00c58);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar4,&local_d0);
    uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar6 != puVar8) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_178);
    }
    FUN_140e60910(1);
    local_e8 = 7;
    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
      uVar10 = (undefined4)*puVar5;
    }
    else {
      uVar10 = FUN_140e4b060(puVar5);
    }
    dVar1 = (double)FUN_140e78d00(uVar10);
    if (DAT_141955260 < dVar1 - 0.2) {
      local_e8 = 10;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff008);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a278);
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a278);
      if (puVar8 != &local_158) {
        local_178 = (longlong *)*puVar8;
        uStack_170 = *(undefined4 *)(puVar8 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_178);
      }
      local_d0 = &local_158;
      local_178 = (longlong *)CONCAT44(uRam0000000141dc7684,_DAT_141dc7680);
      uStack_170 = uRam0000000141dc7688;
      uStack_16c = uRam0000000141dc768c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
      local_c8 = &local_148;
      if (puVar6 != &local_138) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_178);
      }
      local_c0 = &local_138;
      FUN_140e609c0(param_1);
      uVar4 = CONCAT44(uVar14,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar4,&local_d0);
      uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (puVar6 != puVar9) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        FUN_140041b80(puVar9,&local_178);
      }
      FUN_140e60910(1);
    }
    else {
      local_e8 = 8;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      (**(code **)(*param_1 + 8))(param_1,DAT_1419ff008);
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a278);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
    }
    local_e8 = 0xc;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7684,_DAT_141dc7680);
    uStack_170 = uRam0000000141dc7688;
    uStack_16c = uRam0000000141dc768c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
    local_d0 = &local_158;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7684,_DAT_141dc7680);
    uStack_170 = uRam0000000141dc7688;
    uStack_16c = uRam0000000141dc768c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_c8 = &local_148;
    if (puVar5 != &local_138) {
      local_178 = (longlong *)*puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    local_c0 = &local_138;
    if (puVar7 != &local_128) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    local_b8 = &local_128;
    ppuVar15 = &local_d0;
    ppuVar12 = (undefined8 **)CONCAT44(uVar14,DAT_1419fd548);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_168,4,ppuVar12,ppuVar15);
    local_fc = 0;
    local_108 = 0x3fc999999999999a;
    iVar2 = FUN_140e851f0(uVar4,&local_108,DAT_141955260,1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar2 != -2 && iVar2 < 1) {
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      uVar14 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
      local_178 = (longlong *)CONCAT44(uRam0000000141dc7684,_DAT_141dc7680);
      uStack_170 = uRam0000000141dc7688;
      uStack_16c = uRam0000000141dc768c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
      local_b0 = &local_118;
      ppuVar15 = &local_b0;
      ppuVar12 = (undefined8 **)CONCAT44(uVar14,DAT_141a0a0d8);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,1,ppuVar12,ppuVar15);
      local_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      local_100 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
        local_108 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_108,puVar6);
      }
      uStack_16c = 0;
      local_178 = (longlong *)0x3fff333333333333;
      FUN_140042560(&local_108,&local_178);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      uVar3 = FUN_140e851f0(uVar4,&local_108,DAT_141955260,1);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if (uVar3 < 0x80000000) {
        local_e8 = 0xe;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0x3ff0000000000000;
        local_e8 = 0xf;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
      }
    }
  }
  else {
    local_e8 = 0x16;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419feff8);
    FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_58);
    iVar2 = FUN_140e851f0(&local_58,uVar4,DAT_141955260,0);
    if (iVar2 == 0) {
      local_e8 = 0x17;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uVar14 = (undefined4)((ulonglong)pcVar11 >> 0x20);
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3608);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if (puVar6 != &local_158) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_178);
      }
      local_d0 = &local_158;
      if (puVar7 != &local_148) {
        local_178 = (longlong *)*puVar7;
        uStack_170 = *(undefined4 *)(puVar7 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_178);
      }
      local_c8 = &local_148;
      local_178 = (longlong *)CONCAT44(uRam00000001419edbd4,_DAT_1419edbd0);
      uStack_170 = uRam00000001419edbd8;
      uStack_16c = uRam00000001419edbdc;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
      local_c0 = &local_138;
      FUN_140e609c0(param_1);
      ppuVar15 = &local_d0;
      uVar13 = CONCAT44(uVar14,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar13,ppuVar15);
      if (puVar6 != puVar5) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_178);
      }
      FUN_140e60910(1);
    }
    else {
      local_e8 = 0x18;
      uStack_16c = 6;
      ppuVar15 = (undefined8 **)(in_stack_fffffffffffffe80 & 0xffffffffffffff00);
      uVar13 = (ulonglong)pcVar11 & 0xffffffffffffff00;
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_68,uVar13,ppuVar15);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      uStack_16c = 0;
      local_178 = (longlong *)0xc059000000000000;
      uVar3 = FUN_140e851f0(&local_68,&local_178,DAT_141955260,1);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (uVar3 < 0x80000000) {
        local_e8 = 0x1a;
        FUN_140edd0e0(param_1,param_2,0,0);
      }
    }
    local_e8 = 0x1f;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a278);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    local_e8 = 0x20;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_16c = 6;
    ppuVar15 = (undefined8 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0a778,0x80000000,&local_78,uVar13 & 0xffffffffffffff00,ppuVar15
                 );
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = (longlong *)local_78;
    uStack_170 = uStack_70;
    uStack_16c = uStack_6c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
    local_d0 = &local_158;
    local_178 = (longlong *)CONCAT44(uRam00000001419edbb4,_DAT_1419edbb0);
    uStack_170 = uRam00000001419edbb8;
    uStack_16c = uRam00000001419edbbc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_c8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam00000001419edbc4,_DAT_1419edbc0);
    uStack_170 = uRam00000001419edbc8;
    uStack_16c = uRam00000001419edbcc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_c0 = &local_138;
    ppuVar12 = &local_d0;
    puVar6 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_168,3,ppuVar12);
    if (puVar6 != &local_e0) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_178);
    }
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_e0);
  }
  local_e8 = 0x25;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a278);
  uStack_16c = 6;
  uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a778,0x80000000,&local_e0,uVar13,uVar16);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_1400460e0(&local_e0,uVar4);
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_e0);
  local_e8 = 0x27;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_16c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_88,uVar13,uVar16);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_1400460e0(&local_88,uVar4);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_e8 = 0x28;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_98,uVar13 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_1400460e0(&local_98,uVar4);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_e8 = 0x2b;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar4);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return;
}

