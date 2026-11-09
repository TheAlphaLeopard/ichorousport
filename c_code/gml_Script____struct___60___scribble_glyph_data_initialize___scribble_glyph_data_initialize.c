// gml_Script____struct___60___scribble_glyph_data_initialize___scribble_glyph_data_initialize @ 0x1401deef0

undefined8 *
gml_Script____struct___60___scribble_glyph_data_initialize___scribble_glyph_data_initialize
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint **ppuVar6;
  ulonglong **ppuVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe90;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  ulonglong local_128;
  undefined4 local_11c;
  ulonglong local_118;
  byte local_10c;
  ulonglong local_108;
  byte local_fc;
  ulonglong local_f8;
  byte local_ec;
  ulonglong local_e8;
  byte local_dc;
  ulonglong local_d8;
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  uint local_b8 [3];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  ulonglong local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  ulonglong *local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  uint *local_40;
  uint *local_38;
  uint *local_30;
  
  local_90 = "gml_Script___scribble_get_material";
  local_98 = DAT_141dc7a50;
  local_88 = 10;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddda48) &&
     (_Init_thread_header(&DAT_141ddda48), DAT_141ddda48 == -1)) {
    DAT_141ddda50 = (longlong *)FUN_140e63aa0(DAT_141a095b8);
    _Init_thread_footer(&DAT_141ddda48);
  }
  if (DAT_141ddc09b == '\0') {
    FUN_140e64380(DAT_141ddda50,"gml_Script___scribble_get_material");
    FUN_140e64380(param_1,"gml_Script___scribble_get_material");
  }
  local_88 = 0xc;
  if (DAT_141ddc09b == '\0') {
    DAT_141ddc09b = '\x01';
    puVar2 = (ulonglong *)(**(code **)(*DAT_141ddda50 + 0x10))(DAT_141ddda50,DAT_141a09598);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_158);
    local_38 = local_b8;
    ppuVar6 = &local_38;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_168,1,ppuVar6);
    FUN_140e87440(uVar3,DAT_141a095a8,0x80000000,&local_78,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddda50);
    if (&local_78 != puVar2) {
      local_158 = local_78;
      uStack_150 = uStack_70;
      uStack_14c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_158);
    }
    FUN_140e60910(1);
  }
  local_88 = 0xe;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar5 = (uint *)&DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df1a1:
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar2 = (ulonglong *)param_5[1];
    if (puVar2 != &local_118) goto LAB_1401df1a1;
  }
  local_68 = &local_118;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df1ee:
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar2 = (ulonglong *)param_5[2];
    if (puVar2 != &local_108) goto LAB_1401df1ee;
  }
  local_60 = &local_108;
  if (param_4 < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df23b:
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  else {
    puVar2 = (ulonglong *)param_5[3];
    if (puVar2 != &local_f8) goto LAB_1401df23b;
  }
  local_58 = &local_f8;
  if (param_4 < 5) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df288:
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  else {
    puVar2 = (ulonglong *)param_5[4];
    if (puVar2 != &local_e8) goto LAB_1401df288;
  }
  local_50 = &local_e8;
  if (param_4 < 6) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df2d5:
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_158);
  }
  else {
    puVar2 = (ulonglong *)param_5[5];
    if (puVar2 != &local_d8) goto LAB_1401df2d5;
  }
  local_48 = &local_d8;
  ppuVar7 = &local_68;
  puVar2 = (ulonglong *)FUN_1401ee7e0(param_1,param_2,&local_168,5,ppuVar7);
  uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (puVar2 != &local_128) {
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_88 = 0x10;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar2 = (ulonglong *)(**(code **)(*DAT_141ddda50 + 8))(DAT_141ddda50,DAT_141a09598);
  if (puVar2 != &local_118) {
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_68 = &local_118;
  local_60 = &local_128;
  uVar3 = CONCAT44(uVar8,DAT_1419ff4f8);
  puVar2 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar3,&local_68);
  uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_138) {
    local_158 = *puVar2;
    uStack_150 = (uint)puVar2[1];
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  local_88 = 0x11;
  iVar1 = FUN_140e851f0(&local_138,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 != 0) goto LAB_1401df817;
  local_88 = 0x13;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_148 = DAT_141a06998 & 0xffffff;
  uStack_144 = (int)(DAT_141a06998 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_144 == 0xf) {
    uStack_144 = 0x4000004;
  }
  else {
    uStack_144 = uStack_144 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = CONCAT44(uStack_144,DAT_141a06998) & 0xffffffff00ffffff;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_68 = &local_118;
  local_60 = &local_128;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df544:
    local_148 = (uint)*puVar2;
    uStack_144 = *(uint *)((longlong)puVar2 + 4);
    uStack_140 = (uint)puVar2[1];
    uStack_13c = *(uint *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  else {
    puVar2 = (ulonglong *)*param_5;
    if (puVar2 != &local_f8) goto LAB_1401df544;
  }
  local_58 = &local_f8;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df591:
    local_148 = (uint)*puVar2;
    uStack_144 = *(uint *)((longlong)puVar2 + 4);
    uStack_140 = (uint)puVar2[1];
    uStack_13c = *(uint *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  else {
    puVar2 = (ulonglong *)param_5[1];
    if (puVar2 != &local_e8) goto LAB_1401df591;
  }
  local_50 = &local_e8;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1401df5de:
    local_148 = (uint)*puVar2;
    uStack_144 = *(uint *)((longlong)puVar2 + 4);
    uStack_140 = (uint)puVar2[1];
    uStack_13c = *(uint *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar2 = (ulonglong *)param_5[2];
    if (puVar2 != &local_d8) goto LAB_1401df5de;
  }
  local_48 = &local_d8;
  if (param_4 < 4) {
    puVar4 = (uint *)&DAT_1419df7b0;
LAB_1401df62b:
    local_148 = *puVar4;
    uStack_144 = puVar4[1];
    uStack_140 = puVar4[2];
    uStack_13c = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_148);
  }
  else {
    puVar4 = (uint *)param_5[3];
    if (puVar4 != local_c8) goto LAB_1401df62b;
  }
  local_40 = local_c8;
  if (param_4 < 5) {
    puVar4 = (uint *)&DAT_1419df7b0;
LAB_1401df678:
    local_148 = *puVar4;
    uStack_144 = puVar4[1];
    uStack_140 = puVar4[2];
    uStack_13c = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_148);
  }
  else {
    puVar4 = (uint *)param_5[4];
    if (puVar4 != local_b8) goto LAB_1401df678;
  }
  local_38 = local_b8;
  if ((param_4 < 6) || (puVar5 = (uint *)param_5[5], puVar5 != local_a8)) {
    local_148 = *puVar5;
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_148);
  }
  local_30 = local_a8;
  uVar3 = CONCAT44(uVar8,DAT_1419fd6d8);
  puVar5 = (uint *)FUN_140e634e0(param_1,param_2,&local_168,8,uVar3,&local_68);
  uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar5 != (uint *)&local_138) {
    local_148 = *puVar5;
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
  }
  local_88 = 0x14;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar2 = (ulonglong *)(**(code **)(*DAT_141ddda50 + 8))(DAT_141ddda50,DAT_141a09598);
  if (puVar2 != &local_118) {
    local_148 = (uint)*puVar2;
    uStack_144 = *(uint *)((longlong)puVar2 + 4);
    uStack_140 = (uint)puVar2[1];
    uStack_13c = *(uint *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  local_68 = &local_118;
  local_60 = &local_128;
  local_58 = &local_138;
  FUN_140e634e0(param_1,param_2,&local_168,3,CONCAT44(uVar8,DAT_1419ff3d8),&local_68);
LAB_1401df817:
  local_88 = 0x17;
  if (&local_138 != param_3) {
    local_148 = (uint)local_138;
    uStack_144 = local_138._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

