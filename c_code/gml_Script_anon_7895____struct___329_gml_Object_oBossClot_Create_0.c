// gml_Script_anon_7895____struct___329_gml_Object_oBossClot_Create_0 @ 0x140702010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7895____struct___329_gml_Object_oBossClot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar10;
  undefined8 **ppuVar9;
  ulonglong uVar11;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_170 = "gml_Script_anon@7290@___struct___328@gml_Object_oBossClot_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x155;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x157;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar5 != &local_158) {
    local_1b8 = *puVar5;
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
  }
  local_a8 = &local_158;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar10,DAT_141a02ef8),&local_a8);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_168 = 0x158;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar7 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_198,0,0);
    if (puVar7 != puVar5) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_168 = 0x15a;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar5 != &local_158) {
    local_1b8 = *puVar5;
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
  }
  local_a8 = &local_158;
  local_1b8 = CONCAT44(uRam0000000141dc6954,_DAT_141dc6950);
  uStack_1b0 = uRam0000000141dc6958;
  uStack_1ac = uRam0000000141dc695c;
  if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1b8);
  local_a0 = local_148;
  local_1b8 = CONCAT44(uRam00000001419e7b84,_DAT_1419e7b80);
  uStack_1b0 = uRam00000001419e7b88;
  uStack_1ac = uRam00000001419e7b8c;
  if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1b8);
  local_98 = local_138;
  FUN_140e609c0(param_1);
  ppuVar9 = &local_a8;
  puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1c8,3,ppuVar9);
  uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  if (puVar5 != puVar7) {
    local_1b8 = *puVar5;
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1b8);
  }
  FUN_140e60910(1);
  local_168 = 0x15b;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  FUN_140162c50(uVar6,0x3fc999999999999a);
  local_168 = 0x15d;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  local_1b8 = CONCAT44(uRam0000000141dc6954,_DAT_141dc6950);
  uStack_1b0 = uRam0000000141dc6958;
  uStack_1ac = uRam0000000141dc695c;
  if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1b8);
  local_a8 = &local_158;
  local_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  FUN_140046500(&local_188,uVar6);
  local_5c = 0;
  local_68 = 0x3ff0000000000000;
  FUN_1400462a0(&local_68,&local_188);
  ppuVar9 = &local_a8;
  uVar11 = CONCAT44(uVar10,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar11,ppuVar9);
  local_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1a0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar5);
  }
  uStack_1ac = 0;
  local_1b8 = 0x3ff3333333333333;
  FUN_140042560(&local_1a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_bc = local_19c;
  uStack_c0 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_c8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_1a8);
  }
  FUN_140042560(&local_c8,&local_68);
  local_1b8 = local_c8;
  uStack_1b0 = uStack_c0;
  uStack_1ac = uStack_bc;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_1b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_168 = 0x15e;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_38,uVar11,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar11 >> 0x20);
  local_1b8 = CONCAT44(uRam0000000141dc6954,_DAT_141dc6950);
  uStack_1b0 = uRam0000000141dc6958;
  uStack_1ac = uRam0000000141dc695c;
  if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1b8);
  local_a8 = &local_158;
  ppuVar9 = &local_a8;
  uVar11 = CONCAT44(uVar10,DAT_141a0a0d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar11,ppuVar9);
  local_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1a0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar5);
  }
  uStack_1ac = 0;
  local_1b8 = 0x4006000000000000;
  FUN_140042560(&local_1a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_17c = local_19c;
  local_180 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_188 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_188,&local_1a8);
  }
  FUN_1400462a0(&local_188,&local_b8);
  uVar2 = FUN_140e851f0(&local_38,&local_188,DAT_141955260,1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (uVar2 < 0x80000000) {
    local_168 = 0x160;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_1419f5fd8,0x80000000,&local_48,uVar11 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar6 = FUN_140069500(uVar6);
    uVar11 = 0;
    puVar4 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_198,0,&local_48,0);
    if (puVar4 != &local_d8) {
      local_1b8 = *puVar4;
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_1b8);
    }
    do {
      local_168 = 0x163;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      local_1b8 = CONCAT44(uRam0000000141dd5fec,_DAT_141dd5fe8);
      uStack_1b0 = uRam0000000141dd5ff0;
      uStack_1ac = DAT_141dd5ff4;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
      local_a8 = &local_158;
      local_1b8 = CONCAT44(uRam00000001419e7d94,_DAT_1419e7d90);
      uStack_1b0 = uRam00000001419e7d98;
      uStack_1ac = uRam00000001419e7d9c;
      if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1b8);
      local_a0 = local_148;
      local_1b8 = CONCAT44(DAT_141dd5fa8._4_4_,(undefined4)DAT_141dd5fa8);
      uStack_1b0 = DAT_141dd5fb0;
      uStack_1ac = DAT_141dd5fb4;
      if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1b8);
      local_98 = local_138;
      local_1b8 = CONCAT44(uRam00000001419e7b94,_DAT_1419e7b90);
      uStack_1b0 = uRam00000001419e7b98;
      uStack_1ac = uRam00000001419e7b9c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1b8);
      local_90 = local_128;
      local_1b8 = CONCAT44(uRam0000000141dd605c,_DAT_141dd6058);
      uStack_1b0 = uRam0000000141dd6060;
      uStack_1ac = DAT_141dd6064;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1b8);
      local_88 = local_118;
      local_1b8 = CONCAT44(uRam00000001419e7d84,_DAT_1419e7d80);
      uStack_1b0 = uRam00000001419e7d88;
      uStack_1ac = uRam00000001419e7d8c;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1b8);
      local_80 = local_108;
      ppuVar9 = &local_a8;
      puVar4 = (undefined8 *)
               gml_GlobalScript_collision_line_width(param_1,param_2,&local_1c8,6,ppuVar9);
      if (puVar4 != &local_f8) {
        local_1b8 = *puVar4;
        uStack_1b0 = *(undefined4 *)(puVar4 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1b8);
      }
      iVar3 = FUN_140e851f0(&local_f8,&local_d8,DAT_141955260,0);
    } while (iVar3 == 0);
    local_168 = 0x165;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_58,(ulonglong)ppuVar9 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    local_a8 = &local_f8;
    uVar6 = FUN_140069500(uVar6);
    FUN_140e63610(uVar6,param_2,&local_1c8,1,&local_58,&local_a8);
    local_168 = 0x166;
  }
  else {
    local_168 = 0x169;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar6,0);
    local_168 = 0x16a;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar6,0);
    local_168 = 0x16b;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar6,0);
    local_168 = 0x16c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
    local_1b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = DAT_1419df7b8;
    uStack_1ac = DAT_1419df7bc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
    local_a8 = &local_158;
    local_1b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = DAT_1419df7b8;
    uStack_1ac = DAT_1419df7bc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
    local_a0 = local_148;
    local_1b8 = CONCAT44(uRam00000001419e7d24,_DAT_1419e7d20);
    uStack_1b0 = uRam00000001419e7d28;
    uStack_1ac = uRam00000001419e7d2c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1b8);
    local_98 = local_138;
    ppuVar9 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_1c8,3,uVar11,ppuVar9);
    local_168 = 0x16e;
    if (puVar4 != &local_e8) {
      local_1b8 = *puVar4;
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1b8);
    }
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e8);
    local_168 = 0x170;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff2d8);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar8,DAT_141a0a848,0x80000000,&local_78,uVar11 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    FUN_1400460e0(&local_78,uVar6);
    FUN_140e87930(uVar8,DAT_141a0a848,0x80000000,&local_78);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

