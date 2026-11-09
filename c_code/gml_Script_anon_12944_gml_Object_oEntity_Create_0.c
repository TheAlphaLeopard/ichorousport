// gml_Script_anon_12944_gml_Object_oEntity_Create_0 @ 0x140ab8850

longlong *
gml_Script_anon_12944_gml_Object_oEntity_Create_0
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong uVar13;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
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
  
  local_120 = "gml_Script_anon@12596@gml_Object_oEntity_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x24c;
  FUN_140041df0(local_88,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_13c = 0;
  uVar8 = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x24c;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_80;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_118 = 0x24c;
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
  local_118 = 0x24e;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_18c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_138,uVar10,in_stack_fffffffffffffe60);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_188,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffe60);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_138;
  uStack_190 = uStack_130;
  uStack_18c = uStack_12c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_198);
  local_78 = local_108;
  if ((int)local_88[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_80;
  }
  uStack_18c = uStack_17c;
  uStack_190 = uStack_180;
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_198 = local_188;
  }
  else {
    FUN_1400419b0(&local_198,&local_188);
  }
  FUN_1400460e0(&local_198,puVar4);
  local_178 = (undefined4)local_198;
  uStack_174 = local_198._4_4_;
  uStack_170 = uStack_190;
  uStack_16c = uStack_18c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_178);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_70 = local_f8;
  ppuVar11 = &local_78;
  uVar3 = gml_Script_IsBetween(param_1,param_2,&local_148,2,ppuVar11);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    bVar7 = false;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_18c = 6;
    in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
    uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_138,uVar10,in_stack_fffffffffffffe60);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_188,uVar10,
                  in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar10 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_178 = (undefined4)local_138;
    uStack_174 = local_138._4_4_;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_68 = local_e8;
    if (0 < (int)local_88[0]) {
      puVar6 = (undefined8 *)*local_80;
    }
    uStack_18c = uStack_17c;
    uStack_190 = uStack_180;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_198 = local_188;
    }
    else {
      FUN_1400419b0(&local_198,&local_188);
    }
    FUN_1400460e0(&local_198,puVar6);
    local_178 = (undefined4)local_198;
    uStack_174 = local_198._4_4_;
    uStack_170 = uStack_190;
    uStack_16c = uStack_18c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_178);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_60 = local_d8;
    uStack_18c = 0xf;
    local_198 = 0x1000000000000ea;
    local_178 = 0xea;
    uStack_174 = 0x1000000;
    uStack_170 = uStack_190;
    uStack_16c = 0xf;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
    ppuVar11 = &local_68;
    uVar10 = CONCAT44(uVar12,DAT_141a12628);
    local_58 = local_c8;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar10,ppuVar11);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_18c = 6;
      uVar13 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      local_198 = param_1;
      FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_138,uVar10,uVar13);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_18c = 6;
      uVar10 = uVar10 & 0xffffffffffffff00;
      local_198 = param_1;
      FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_188,uVar10,
                    uVar13 & 0xffffffffffffff00);
      uVar12 = (undefined4)(uVar10 >> 0x20);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_178 = (undefined4)local_138;
      uStack_174 = local_138._4_4_;
      uStack_170 = uStack_130;
      uStack_16c = uStack_12c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_178);
      local_50 = local_b8;
      local_178 = (undefined4)local_188;
      uStack_174 = local_188._4_4_;
      uStack_170 = uStack_180;
      uStack_16c = uStack_17c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_178);
      local_48 = local_a8;
      uStack_18c = 0xf;
      local_198 = 0x1000000000000ea;
      local_178 = 0xea;
      uStack_174 = 0x1000000;
      uStack_170 = uStack_190;
      uStack_16c = 0xf;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_178);
      local_40 = local_98;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_168,3,CONCAT44(uVar12,DAT_141a12628),&local_50);
      cVar1 = FUN_140e491e0(uVar3);
      bVar7 = cVar1 == '\0';
    }
  }
  else {
    bVar7 = true;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar7) {
    uVar8 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,8,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar6 = local_80;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

