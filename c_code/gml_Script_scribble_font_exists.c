// gml_Script_scribble_font_exists @ 0x14046ad90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_font_exists
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe40;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168 [3];
  undefined4 local_15c;
  uint local_158 [3];
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  uint local_138 [3];
  byte local_12c;
  uint local_128 [3];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  undefined8 *local_a0;
  uint *local_98;
  uint *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_d0 = "gml_Script_scribble_font_duplicate";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 5;
  _eh_vector_constructor_iterator_(local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_2c = 0xffffff;
  local_38 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_15c = 0xffffff;
  local_168[0] = 0;
  local_168[1] = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf068) &&
     (_Init_thread_header(&DAT_141ddf068), DAT_141ddf068 == -1)) {
    DAT_141ddf060 = (longlong *)FUN_140e63aa0(DAT_1419f8b48);
    _Init_thread_footer(&DAT_141ddf068);
  }
  if (DAT_141ddc191 == '\0') {
    FUN_140e64380(DAT_141ddf060,"gml_Script_scribble_font_duplicate");
    FUN_140e64380(param_1,"gml_Script_scribble_font_duplicate");
  }
  local_c8 = 9;
  if (DAT_141ddc191 == '\0') {
    DAT_141ddc191 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddf060 + 0x10))(DAT_141ddf060,DAT_141a06458);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1a8);
    local_98 = local_138;
    ppuVar8 = &local_98;
    uVar5 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_1b8,1,ppuVar8);
    FUN_140e87440(uVar5,DAT_141a06198,0x80000000,&local_b8,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddf060);
    if (&local_b8 != puVar4) {
      local_1a8 = local_b8;
      uStack_1a0 = uStack_b0;
      uStack_19c = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_c8 = 7;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  puVar7 = (uint *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = (uint *)&DAT_1419df7b0;
LAB_14046b09b:
    local_1a8 = *(ulonglong *)puVar6;
    uStack_1a0 = puVar6[2];
    uStack_19c = puVar6[3];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1a8);
  }
  else {
    puVar6 = (uint *)*param_5;
    if (puVar6 != local_158) goto LAB_14046b09b;
  }
  local_a8 = local_158;
  ppuVar8 = &local_a8;
  puVar4 = (undefined8 *)FUN_1401effd0(param_1,param_2,&local_1b8,1,ppuVar8);
  uVar3 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  if (puVar4 != &local_188) {
    local_1a8 = *puVar4;
    uStack_1a0 = *(uint *)(puVar4 + 1);
    uStack_19c = *(uint *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
  }
  local_c8 = 10;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  puVar6 = (uint *)(**(code **)(*DAT_141ddf060 + 8))(DAT_141ddf060,DAT_141a06458);
  if (puVar6 != local_158) {
    local_1a8 = *(ulonglong *)puVar6;
    uStack_1a0 = puVar6[2];
    uStack_19c = puVar6[3];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1a8);
  }
  local_a8 = local_158;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_14046b1bf:
    local_1a8 = *puVar4;
    uStack_1a0 = *(uint *)(puVar4 + 1);
    uStack_19c = *(uint *)((longlong)puVar4 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_148) goto LAB_14046b1bf;
  }
  local_a0 = &local_148;
  ppuVar8 = &local_a8;
  ppuVar9 = (uint **)CONCAT44(uVar3,DAT_141a01478);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1b8,2,ppuVar9,ppuVar8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_c8 = 10;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_1a8 = CONCAT44(uRam0000000141dd30ac,_DAT_141dd30a8);
    uStack_1a0 = uRam0000000141dd30b0;
    uStack_19c = DAT_141dd30b4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1a8);
    local_98 = local_138;
    if (param_4 < 2) {
      puVar6 = (uint *)&DAT_1419df7b0;
LAB_14046b2ae:
      local_1a8 = *(ulonglong *)puVar6;
      uStack_1a0 = puVar6[2];
      uStack_19c = puVar6[3];
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1a8);
    }
    else {
      puVar6 = (uint *)param_5[1];
      if (puVar6 != local_128) goto LAB_14046b2ae;
    }
    local_90 = local_128;
    local_1a8 = CONCAT44(uRam0000000141dd30bc,_DAT_141dd30b8);
    uStack_1a0 = uRam0000000141dd30c0;
    uStack_19c = DAT_141dd30c4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1a8);
    local_88 = local_118;
    ppuVar9 = &local_98;
    FUN_1401ef7f0(param_1,param_2,&local_178,3,ppuVar9);
  }
  local_c8 = 0xc;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar11 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a06328,0x80000000,&local_38,uVar10,uVar11);
  local_1a8 = local_38;
  uStack_1a0 = uStack_30;
  uStack_19c = uStack_2c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1a8);
  local_a8 = local_158;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a062b8,0x80000000,&local_48,uVar10,uVar11);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a06138,0x80000000,&local_58,uVar10,uVar11 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_198 = DAT_141a06218 & 0xffffff;
  uStack_194 = (int)(DAT_141a06218 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_194 == 0xf) {
    uStack_194 = 0x4000004;
  }
  else {
    uStack_194 = uStack_194 | 0x1000000;
  }
  uStack_19c = 0xf;
  local_1a8 = CONCAT44(uStack_194,DAT_141a06218) & 0xffffffff00ffffff;
  uStack_190 = uStack_1a0;
  uStack_18c = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_198);
  local_a0 = &local_148;
  if ((param_4 < 2) || (puVar7 = (uint *)param_5[1], puVar7 != local_138)) {
    local_198 = *puVar7;
    uStack_194 = puVar7[1];
    uStack_190 = puVar7[2];
    uStack_18c = puVar7[3];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_198);
  }
  local_98 = local_138;
  uVar5 = CONCAT44(uVar3,DAT_141a064d8);
  puVar7 = (uint *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar5,&local_a8);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar7 != local_128) {
    local_198 = *puVar7;
    uStack_194 = puVar7[1];
    uStack_190 = puVar7[2];
    uStack_18c = puVar7[3];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_198);
  }
  local_90 = local_128;
  local_198 = (uint)local_48;
  uStack_194 = local_48._4_4_;
  uStack_190 = uStack_40;
  uStack_18c = uStack_3c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_198);
  local_88 = local_118;
  local_198 = _DAT_1419df7a0;
  uStack_194 = uRam00000001419df7a4;
  uStack_190 = uRam00000001419df7a8;
  uStack_18c = uRam00000001419df7ac;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_198);
  local_80 = local_108;
  local_198 = (uint)local_58;
  uStack_194 = local_58._4_4_;
  uStack_190 = uStack_50;
  uStack_18c = uStack_4c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_198);
  local_78 = local_f8;
  ppuVar12 = &local_a0;
  uVar10 = CONCAT44(uVar3,DAT_1419fd6d8);
  puVar7 = (uint *)FUN_140e634e0(param_1,param_2,&local_1b8,6,uVar10,ppuVar12);
  if (puVar7 != local_168) {
    local_198 = *puVar7;
    uStack_194 = puVar7[1];
    uStack_190 = puVar7[2];
    uStack_18c = puVar7[3];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_198);
  }
  local_c8 = 0xd;
  local_1a8 = 0x3ff0000000000000;
  uStack_19c = 0xd;
  local_198 = 0;
  uStack_194 = 0x3ff00000;
  uStack_190 = uStack_1a0;
  uStack_18c = 0xd;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_198);
  FUN_140e87930(local_168,DAT_141a06348,0x80000000,&local_e8);
  local_c8 = 0xe;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  FUN_140e87440(&local_188,DAT_141a06378,0x80000000,&local_70,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  local_a8 = local_168;
  local_198 = _DAT_1419df7c0;
  uStack_194 = uRam00000001419df7c4;
  uStack_190 = uRam00000001419df7c8;
  uStack_18c = uRam00000001419df7cc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_198);
  local_a0 = &local_148;
  uVar5 = 0;
  switch(local_17c) {
  case 6:
    uVar5 = local_188;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_188 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_188);
    uVar5 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar5,param_2,&local_1b8,2,&local_70,&local_a8);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

