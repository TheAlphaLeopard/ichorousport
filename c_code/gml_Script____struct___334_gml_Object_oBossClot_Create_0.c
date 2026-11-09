// gml_Script____struct___334_gml_Object_oBossClot_Create_0 @ 0x140710120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___334_gml_Object_oBossClot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar15;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_210 = "gml_Script_anon@16246@___struct___334@gml_Object_oBossClot_Create_0";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x34f;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_23c = 0;
  local_248 = 0;
  local_1f4 = 0;
  local_200 = 0;
  local_4c = 0;
  local_58 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x351;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar7 != &local_168) {
    local_1f0 = *(undefined4 *)puVar7;
    uStack_1ec = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_1e8 = *(undefined4 *)(puVar7 + 1);
    uStack_1e4 = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1f0);
  }
  local_d8 = &local_168;
  ppuVar14 = &local_d8;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_248,1,CONCAT44(uVar15,DAT_141a02ef8),ppuVar14);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_208 = 0x352;
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_200 = 0;
    local_1f8 = 0;
    local_1f4 = 5;
    puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar10 = (undefined4 *)gml_Script_FracPos(param_1,param_2,&local_200,0,0);
    if (puVar10 != puVar9) {
      local_1f0 = *puVar10;
      uStack_1ec = puVar10[1];
      uStack_1e8 = puVar10[2];
      uStack_1e4 = puVar10[3];
      if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1f0);
    }
    FUN_140e60910(1);
  }
  local_208 = 0x354;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar7 != &local_168) {
    local_1f0 = *(undefined4 *)puVar7;
    uStack_1ec = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_1e8 = *(undefined4 *)(puVar7 + 1);
    uStack_1e4 = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1f0);
  }
  local_d8 = &local_168;
  local_1f0 = _DAT_141dc6950;
  uStack_1ec = uRam0000000141dc6954;
  uStack_1e8 = uRam0000000141dc6958;
  uStack_1e4 = uRam0000000141dc695c;
  if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1f0);
  local_d0 = local_158;
  local_1f0 = _DAT_1419e7b80;
  uStack_1ec = uRam00000001419e7b84;
  uStack_1e8 = uRam00000001419e7b88;
  uStack_1e4 = uRam00000001419e7b8c;
  if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f0);
  local_c8 = local_148;
  FUN_140e609c0(param_1);
  ppuVar13 = &local_d8;
  puVar10 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_248,3,ppuVar13);
  if (puVar10 != puVar9) {
    local_1f0 = *puVar10;
    uStack_1ec = puVar10[1];
    uStack_1e8 = puVar10[2];
    uStack_1e4 = puVar10[3];
    if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1f0);
  }
  FUN_140e60910(1);
  local_208 = 0x355;
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  FUN_140162c50(uVar8,0x3fc999999999999a);
  local_208 = 0x357;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar11 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_141a06488,0x80000000,&local_68,uVar11,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar11 >> 0x20);
  local_174 = 0;
  local_180 = 0x4008000000000000;
  uVar4 = FUN_140e851f0(&local_68,&local_180,DAT_141955260,1);
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  local_1c4 = 0xd;
  if (uVar4 < 0x80000000) {
    local_1d0 = 0x3ff0000000000000;
  }
  else {
    local_1d0 = 0;
  }
  local_208 = 0x358;
  cVar3 = FUN_140e491e0(&local_1d0);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    local_238 = _DAT_141dc6950;
    uStack_234 = uRam0000000141dc6954;
    uStack_230 = uRam0000000141dc6958;
    uStack_22c = uRam0000000141dc695c;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_238);
    local_c0 = local_138;
    ppuVar16 = &local_c0;
    uVar11 = CONCAT44(uVar15,DAT_141a0a0d8);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar11,ppuVar16);
    FUN_1400b46b0(&local_180,uVar8,0x3fd999999999999a);
    puVar7 = &local_180;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_200 = 0;
    local_1f8 = 0;
    local_1f4 = 5;
    local_238 = _DAT_141dc6950;
    uStack_234 = uRam0000000141dc6954;
    uStack_230 = uRam0000000141dc6958;
    uStack_22c = uRam0000000141dc695c;
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_238);
    local_d0 = local_158;
    ppuVar16 = &local_d0;
    uVar11 = CONCAT44(uVar15,DAT_141a0a0d8);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_200,1,uVar11,ppuVar16);
    FUN_1400b46b0(&local_1f0,uVar8,0x4004000000000000);
    puVar7 = (undefined8 *)&local_1f0;
    bVar2 = true;
    bVar1 = false;
  }
  local_238 = *(undefined4 *)puVar7;
  uStack_234 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_230 = *(undefined4 *)(puVar7 + 1);
  uStack_22c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_238);
  if ((bVar1) && ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_180);
  }
  if ((bVar2) && ((1 << ((byte)uStack_1e4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1f0);
  }
  local_208 = 0x35a;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_141a0a848,0x80000000,&local_78,uVar11,uVar17);
  uVar4 = FUN_140e851f0(&local_78,&local_e8,DAT_141955260,1);
  if (uVar4 < 0x80000000) {
    local_208 = 0x35c;
    cVar3 = FUN_140e491e0(&local_1d0);
    if (cVar3 == '\0') {
      local_208 = 0x363;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uVar17 = uVar17 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar8,DAT_141a06488,0x80000000,&local_228,uVar11,uVar17);
      uVar4 = local_21c & 0xffffff;
      if (uVar4 == 0) {
LAB_140710e97:
        local_228 = local_228 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_228 = (double)FUN_140e4b060(&local_228);
          local_21c = 0;
          goto LAB_140710e97;
        }
        if (uVar4 == 7) {
          local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_228 = (double)((longlong)local_228 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_21c = 0;
            goto LAB_140710e97;
          }
          FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
        }
      }
      FUN_140e87930(uVar8,DAT_141a06488,0x80000000,&local_228);
      local_208 = 0x364;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar8,DAT_1419f5fd8,0x80000000,&local_88,uVar11 & 0xffffffffffffff00,
                    uVar17 & 0xffffffffffffff00);
      uVar8 = FUN_140069500(uVar8);
      uVar11 = 0;
      puVar6 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_248,0,&local_88,0);
      if (puVar6 != &local_190) {
        local_238 = *(undefined4 *)puVar6;
        uStack_234 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_230 = *(undefined4 *)(puVar6 + 1);
        uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        FUN_140041b80(&local_190,&local_238);
      }
      do {
        local_208 = 0x367;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        local_238 = (undefined4)DAT_141dd5fa8;
        uStack_234 = DAT_141dd5fa8._4_4_;
        uStack_230 = DAT_141dd5fb0;
        uStack_22c = DAT_141dd5fb4;
        if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_238);
        local_d8 = &local_168;
        local_238 = _DAT_1419e7d90;
        uStack_234 = uRam00000001419e7d94;
        uStack_230 = uRam00000001419e7d98;
        uStack_22c = uRam00000001419e7d9c;
        if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_238);
        local_d0 = local_158;
        local_238 = _DAT_141dd6108;
        uStack_234 = uRam0000000141dd610c;
        uStack_230 = uRam0000000141dd6110;
        uStack_22c = DAT_141dd6114;
        if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_238);
        local_c8 = local_148;
        local_238 = _DAT_1419e7b90;
        uStack_234 = uRam00000001419e7b94;
        uStack_230 = uRam00000001419e7b98;
        uStack_22c = uRam00000001419e7b9c;
        if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_238);
        local_c0 = local_138;
        local_238 = _DAT_141dd5fb8;
        uStack_234 = uRam0000000141dd5fbc;
        uStack_230 = uRam0000000141dd5fc0;
        uStack_22c = DAT_141dd5fc4;
        if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_238);
        local_b8 = local_128;
        local_238 = _DAT_1419e7c50;
        uStack_234 = uRam00000001419e7c54;
        uStack_230 = uRam00000001419e7c58;
        uStack_22c = uRam00000001419e7c5c;
        if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_238);
        local_b0 = local_118;
        local_238 = _DAT_141dd6128;
        uStack_234 = uRam0000000141dd612c;
        uStack_230 = uRam0000000141dd6130;
        uStack_22c = DAT_141dd6134;
        if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_238);
        local_a8 = local_108;
        local_238 = _DAT_1419e7b90;
        uStack_234 = uRam00000001419e7b94;
        uStack_230 = uRam00000001419e7b98;
        uStack_22c = uRam00000001419e7b9c;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_238);
        local_a0 = local_f8;
        ppuVar14 = &local_d8;
        puVar6 = (undefined8 *)
                 gml_GlobalScript_collision_line_width(param_1,param_2,&local_248,8,ppuVar14);
        if (puVar6 != &local_1b0) {
          local_238 = *(undefined4 *)puVar6;
          uStack_234 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_230 = *(undefined4 *)(puVar6 + 1);
          uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b0);
          }
          FUN_140041b80(&local_1b0,&local_238);
        }
        iVar5 = FUN_140e851f0(&local_1b0,&local_190,DAT_141955260,0);
      } while (iVar5 == 0);
      local_208 = 0x369;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_98,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
      local_d8 = &local_1b0;
      uVar8 = FUN_140069500(uVar8);
      FUN_140e63610(uVar8,param_2,&local_248,1,&local_98,&local_d8);
      local_208 = 0x36a;
      goto LAB_140710c4d;
    }
    local_208 = 0x35e;
    uVar8 = (**(code **)(*param_1 + 8))();
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_21c = 0;
    local_228 = 0.0;
    FUN_140e87930(uVar8,DAT_141a06488,0x80000000,&local_228);
    local_208 = 0x35f;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_1d4 = 0;
    local_1e0 = 0;
    FUN_140e87930(uVar8,DAT_141a0a848,0x80000000,&local_1e0);
  }
  local_208 = 0x36e;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_248,0,uVar8,0);
  local_208 = 0x36f;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_248,0,uVar8,0);
  local_208 = 0x370;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_248,0,uVar8,0);
  local_208 = 0x371;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
  local_238 = (undefined4)DAT_1419df7b0;
  uStack_234 = DAT_1419df7b0._4_4_;
  uStack_230 = DAT_1419df7b8;
  uStack_22c = DAT_1419df7bc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_238);
  local_d8 = &local_168;
  local_238 = (undefined4)DAT_1419df7b0;
  uStack_234 = DAT_1419df7b0._4_4_;
  uStack_230 = DAT_1419df7b8;
  uStack_22c = DAT_1419df7bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_238);
  local_d0 = local_158;
  local_238 = _DAT_1419e7d20;
  uStack_234 = uRam00000001419e7d24;
  uStack_230 = uRam00000001419e7d28;
  uStack_22c = uRam00000001419e7d2c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_238);
  local_c8 = local_148;
  ppuVar14 = &local_d8;
  FUN_140e63610(param_1,param_2,&local_248,3,uVar11,ppuVar14);
  local_208 = 0x373;
  if (puVar6 != &local_1a0) {
    local_238 = *(undefined4 *)puVar6;
    uStack_234 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_230 = *(undefined4 *)(puVar6 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_238);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_1a0);
  local_208 = 0x375;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff2d8);
  uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar12,DAT_141a0a848,0x80000000,&local_1e0,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  FUN_1400460e0(&local_1e0,uVar8);
  FUN_140e87930(uVar12,DAT_141a0a848,0x80000000,&local_1e0);
LAB_140710c4d:
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

