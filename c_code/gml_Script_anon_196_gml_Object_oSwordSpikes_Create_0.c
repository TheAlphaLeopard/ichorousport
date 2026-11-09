// gml_Script_anon_196_gml_Object_oSwordSpikes_Create_0 @ 0x140da4420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_196_gml_Object_oSwordSpikes_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar13;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 **ppuVar12;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  ppuVar12 = &local_d8;
  local_100 = "gml_Object_oSword_Step_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_84 = 0xffffff;
  local_90 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_f8 = 4;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  local_1a8 = (longlong *)CONCAT44(uRam0000000141dc77c4,_DAT_141dc77c0);
  uStack_1a0 = uRam0000000141dc77c8;
  uStack_19c = uRam0000000141dc77cc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1a8);
  local_f0 = &local_168;
  ppuVar15 = &local_f0;
  uVar10 = CONCAT44(uVar13,DAT_141a0a0d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,ppuVar15);
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_180 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_188,puVar6);
  }
  uStack_19c = 7;
  local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,8);
  FUN_140042560(&local_188,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uVar2 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (uVar2 < 0x80000000) {
    local_f8 = 5;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_f8 = 7;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uStack_19c = 6;
  uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_48,uVar10,uVar14);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_58,uVar10,uVar14 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = (longlong *)local_48;
  uStack_1a0 = uStack_40;
  uStack_19c = uStack_3c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1a8);
  local_f0 = &local_168;
  local_1a8 = (longlong *)local_58;
  uStack_1a0 = uStack_50;
  uStack_19c = uStack_4c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1a8);
  local_e8 = &local_158;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x1000000000000ee;
  local_188 = 0x1000000000000ee;
  uStack_180 = uStack_1a0;
  uStack_17c = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  local_e0 = local_148;
  uVar11 = CONCAT44(uVar13,DAT_141a12628);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_198,3,uVar11,&local_f0);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar7);
  if (cVar1 != '\0') {
    local_f8 = 9;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x1000000000000ee;
    local_188 = 0x1000000000000ee;
    uStack_180 = uStack_1a0;
    uStack_17c = 0xf;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_188);
    local_d8 = local_138;
    local_1a8 = (longlong *)CONCAT44(uRam00000001419edfa4,_DAT_1419edfa0);
    uStack_1a0 = uRam00000001419edfa8;
    uStack_19c = uRam00000001419edfac;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1a8);
    local_d0 = local_128;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x10000000000002d;
    local_188 = 0x10000000000002d;
    uStack_180 = uStack_1a0;
    uStack_17c = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_188);
    local_c8 = local_118;
    gml_Script_draw_line_sprite(param_1,param_2,&local_178,3,ppuVar12);
    uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    local_f8 = 10;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x10000010000011b;
    local_188 = 0x10000010000011b;
    uStack_180 = uStack_1a0;
    uStack_17c = 0xf;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_188);
    FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_a0);
  }
  local_f8 = 0xe;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_1a8 = (longlong *)CONCAT44(uRam0000000141dc77c4,_DAT_141dc77c0);
  uStack_1a0 = uRam0000000141dc77c8;
  uStack_19c = uRam0000000141dc77cc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1a8);
  local_f0 = &local_168;
  ppuVar15 = &local_f0;
  uVar10 = CONCAT44(uVar13,DAT_141a0a0d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar10,ppuVar15);
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_180 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_188,puVar6);
  }
  uStack_19c = 7;
  local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,2);
  FUN_140042560(&local_188,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  iVar3 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar3 != -2 && iVar3 < 1) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a47748);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_f8 = 0x10;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      uVar13 = (undefined4)(uVar10 >> 0x20);
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      if (puVar6 != &local_158) {
        local_1a8 = (longlong *)*puVar6;
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1a8);
      }
      local_e8 = &local_158;
      local_1a8 = (longlong *)CONCAT44(uRam0000000141dc77c4,_DAT_141dc77c0);
      uStack_1a0 = uRam0000000141dc77c8;
      uStack_19c = uRam0000000141dc77cc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1a8);
      local_e0 = local_148;
      local_1a8 = (longlong *)CONCAT44(uRam00000001419edf84,_DAT_1419edf80);
      uStack_1a0 = uRam00000001419edf88;
      uStack_19c = uRam00000001419edf8c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1a8);
      local_d8 = local_138;
      FUN_140e609c0(param_1);
      uVar5 = CONCAT44(uVar13,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,3,uVar5,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar6 != puVar8) {
        local_1a8 = (longlong *)*puVar6;
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_1a8);
      }
      FUN_140e60910(1);
      local_f8 = 0x11;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if (puVar6 != &local_168) {
        local_1a8 = (longlong *)*puVar6;
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1a8);
      }
      local_f0 = &local_168;
      local_1a8 = (longlong *)CONCAT44(uRam0000000141dc77c4,_DAT_141dc77c0);
      uStack_1a0 = uRam0000000141dc77c8;
      uStack_19c = uRam0000000141dc77cc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1a8);
      local_e8 = &local_158;
      local_1a8 = (longlong *)CONCAT44(uRam00000001419edf84,_DAT_1419edf80);
      uStack_1a0 = uRam00000001419edf88;
      uStack_19c = uRam00000001419edf8c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1a8);
      local_e0 = local_148;
      FUN_140e609c0(param_1);
      ppuVar15 = &local_f0;
      uVar10 = CONCAT44(uVar13,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,3,uVar10,ppuVar15);
      if (puVar6 != puVar8) {
        local_1a8 = (longlong *)*puVar6;
        uStack_1a0 = *(undefined4 *)(puVar6 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_1a8);
      }
      FUN_140e60910(1);
    }
  }
  local_f8 = 0x15;
  uStack_19c = 6;
  ppuVar15 = (undefined8 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a818,0x80000000,&local_70,uVar10,ppuVar15);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 0;
  local_1a8 = (longlong *)0x0;
  iVar3 = FUN_140e851f0(&local_70,&local_1a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 == 0) {
    local_f8 = 0x17;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uVar13 = (undefined4)(uVar10 >> 0x20);
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdf78);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar6 != &local_168) {
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1a8);
    }
    local_f0 = &local_168;
    if (puVar8 != &local_158) {
      local_1a8 = (longlong *)*puVar8;
      uStack_1a0 = *(undefined4 *)(puVar8 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1a8);
    }
    local_e8 = &local_158;
    local_1a8 = (longlong *)CONCAT44(uRam00000001419edf94,_DAT_1419edf90);
    uStack_1a0 = uRam00000001419edf98;
    uStack_19c = uRam00000001419edf9c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_e0 = local_148;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar13,DAT_141a00c58);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,3,uVar5,&local_f0);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar6 != puVar9) {
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1a8);
    }
    FUN_140e60910(1);
    local_f8 = 0x18;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdfc8);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if (puVar6 != &local_168) {
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1a8);
    }
    local_f0 = &local_168;
    if (puVar8 != &local_158) {
      local_1a8 = (longlong *)*puVar8;
      uStack_1a0 = *(undefined4 *)(puVar8 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1a8);
    }
    local_e8 = &local_158;
    local_1a8 = (longlong *)CONCAT44(uRam00000001419edf94,_DAT_1419edf90);
    uStack_1a0 = uRam00000001419edf98;
    uStack_19c = uRam00000001419edf9c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_e0 = local_148;
    FUN_140e609c0(param_1);
    ppuVar15 = &local_f0;
    uVar10 = CONCAT44(uVar13,DAT_141a00c58);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,3,uVar10,ppuVar15);
    if (puVar6 != puVar9) {
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_f8 = 0x1e;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_19c = 6;
  uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_80,uVar10,uVar14);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_180 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_188,puVar6);
  }
  FUN_140042560(&local_188,uVar4);
  FUN_1400460e0(&local_80,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_80);
  local_f8 = 0x1f;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_19c = 6;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_90,uVar10 & 0xffffffffffffff00,
                uVar14 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_180 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_188,puVar6);
  }
  FUN_140042560(&local_188,uVar4);
  FUN_1400460e0(&local_90,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_90);
  local_f8 = 0x22;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_1a8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1a0 = DAT_1419df7b8;
  uStack_19c = DAT_1419df7bc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1a8);
  local_f0 = &local_168;
  local_1a8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1a0 = DAT_1419df7b8;
  uStack_19c = DAT_1419df7bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1a8);
  local_e8 = &local_158;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_198,2,&local_f0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_f8 = 0x24;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_a4 = 0;
    local_b0 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b0);
    local_f8 = 0x25;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_b4 = 0;
    local_c0 = 0x4010000000000000;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_c0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

