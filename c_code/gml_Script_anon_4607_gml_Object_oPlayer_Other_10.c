// gml_Script_anon_4607_gml_Object_oPlayer_Other_10 @ 0x140c66b70

undefined8 *
gml_Script_anon_4607_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar12;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_150 = "gml_Script_anon@3807@gml_Object_oPlayer_Other_10";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x82;
  FUN_140041df0(local_88,param_4,1,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x82;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_80;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_148 = 0x82;
    if ((int)local_88[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_80;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  local_148 = 0x84;
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419f5c58,0x80000000,&local_128,uVar9,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = (longlong *)local_128;
  uStack_1d0 = uStack_120;
  uStack_1cc = uStack_11c;
  FUN_140041b80(&local_118,&local_1d8);
  local_148 = 0x85;
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419f5c58,0x80000000,&local_128,uVar9,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000100000411;
  iVar2 = FUN_140e851f0(&local_128,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 == 0) {
    local_148 = 0x85;
    uStack_1cc = 0xf;
    local_1d8 = (longlong *)0x1000001000003f0;
    local_1c8 = 0x3f0;
    uStack_1c4 = 0x1000001;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = 0xf;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
    FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_1a8);
  }
  local_148 = 0x87;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_168,uVar9,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1b8,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1c8 = (undefined4)local_168;
  uStack_1c4 = local_168._4_4_;
  uStack_1c0 = uStack_160;
  uStack_1bc = uStack_15c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  if ((int)local_88[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_80;
  }
  uStack_1cc = uStack_1ac;
  uStack_1d0 = uStack_1b0;
  local_78 = local_108;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1b8);
  }
  FUN_1400460e0(&local_1d8,puVar4);
  local_1c8 = (undefined4)local_1d8;
  uStack_1c4 = local_1d8._4_4_;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = uStack_1cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1c8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_70 = local_f8;
  ppuVar10 = &local_78;
  uVar3 = gml_Script_IsBetween(param_1,param_2,&local_178,2,ppuVar10);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    bVar7 = false;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uStack_1cc = 6;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
    uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_168,uVar9,in_stack_fffffffffffffe20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,
                  in_stack_fffffffffffffe20 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1c8 = (undefined4)local_168;
    uStack_1c4 = local_168._4_4_;
    uStack_1c0 = uStack_160;
    uStack_1bc = uStack_15c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1c8);
    local_68 = local_e8;
    if (0 < (int)local_88[0]) {
      puVar5 = (undefined8 *)*local_80;
    }
    uStack_1cc = uStack_1ac;
    uStack_1d0 = uStack_1b0;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1b8);
    }
    FUN_1400460e0(&local_1d8,puVar5);
    local_1c8 = (undefined4)local_1d8;
    uStack_1c4 = local_1d8._4_4_;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = uStack_1cc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1c8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_60 = local_d8;
    uStack_1cc = 0xf;
    local_1d8 = (longlong *)0x1000000000000ea;
    local_1c8 = 0xea;
    uStack_1c4 = 0x1000000;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = 0xf;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1c8);
    local_58 = local_c8;
    ppuVar10 = &local_68;
    uVar9 = CONCAT44(uVar11,DAT_141a12628);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_188,3,uVar9,ppuVar10);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uStack_1cc = 6;
      uVar12 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_168,uVar9,uVar12);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uStack_1cc = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar12 & 0xffffffffffffff00
                   );
      uVar11 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1c8 = (undefined4)local_168;
      uStack_1c4 = local_168._4_4_;
      uStack_1c0 = uStack_160;
      uStack_1bc = uStack_15c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1c8);
      local_50 = local_b8;
      local_1c8 = (undefined4)local_1b8;
      uStack_1c4 = local_1b8._4_4_;
      uStack_1c0 = uStack_1b0;
      uStack_1bc = uStack_1ac;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1c8);
      local_48 = local_a8;
      uStack_1cc = 0xf;
      local_1d8 = (longlong *)0x1000000000000ea;
      local_1c8 = 0xea;
      uStack_1c4 = 0x1000000;
      uStack_1c0 = uStack_1d0;
      uStack_1bc = 0xf;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1c8);
      local_40 = local_98;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_198,3,CONCAT44(uVar11,DAT_141a12628),&local_50);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f85b8);
        cVar1 = FUN_140e491e0(uVar3);
        bVar7 = cVar1 == '\0';
      }
    }
    if (bVar7) {
      local_138 = 0x3ff0000000000000;
    }
    else {
      local_138 = 0;
    }
  }
  else {
    local_138 = 0x3ff0000000000000;
  }
  uStack_12c = 0xd;
  local_148 = 0x8a;
  local_1c8 = (undefined4)local_118;
  uStack_1c4 = local_118._4_4_;
  uStack_1c0 = uStack_110;
  uStack_1bc = uStack_10c;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1c8);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_1a8);
  local_148 = 0x8b;
  if (&local_138 != param_3) {
    local_1c8 = (undefined4)local_138;
    uStack_1c4 = local_138._4_4_;
    uStack_1c0 = uStack_130;
    uStack_1bc = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,8,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar5 = local_80;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

