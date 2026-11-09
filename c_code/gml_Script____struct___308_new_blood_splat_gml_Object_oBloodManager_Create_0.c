// gml_Script____struct___308_new_blood_splat_gml_Object_oBloodManager_Create_0 @ 0x1406bbb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___308_new_blood_splat_gml_Object_oBloodManager_Create_0
               (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar6;
  undefined1 **ppuVar3;
  undefined8 **ppuVar4;
  ulonglong uVar5;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_a0 = "gml_Object_oBloodLine_Draw_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  _eh_vector_constructor_iterator_(local_158,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_98 = 5;
  local_198 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_190 = DAT_1419df7b8;
  uStack_18c = DAT_1419df7bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_198);
  local_58 = local_158;
  uStack_18c = DAT_141dd5c44;
  uStack_190 = DAT_141dd5c40;
  if ((1 << ((byte)DAT_141dd5c44 & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)DAT_141dd5c38;
  }
  else {
    FUN_1400419b0(&local_198,&DAT_141dd5c38);
  }
  uVar6 = uStack_18c;
  local_188 = local_198;
  uStack_180 = (char *)CONCAT44(uStack_18c,uStack_190);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_50 = local_148;
  puVar2 = (undefined8 *)
           gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                     (param_1,param_2,&local_90,1,&local_58);
  if (puVar2 != &local_138) {
    local_188 = (undefined8 *)*puVar2;
    uStack_180 = (char *)puVar2[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
  }
  local_48 = &local_138;
  ppuVar3 = &local_50;
  puVar2 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_80,2,ppuVar3);
  uVar6 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  if (puVar2 != &local_128) {
    local_188 = (undefined8 *)*puVar2;
    uStack_180 = (char *)puVar2[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_188);
  }
  local_40 = &local_128;
  ppuVar7 = &local_40;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_70,1,CONCAT44(uVar6,DAT_141a086f8),ppuVar7);
  if (puVar2 != &local_118) {
    local_188 = (undefined8 *)*puVar2;
    uStack_180 = (char *)puVar2[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
  }
  local_38 = &local_118;
  local_188 = (undefined8 *)CONCAT44(uRam00000001419e77d4,_DAT_1419e77d0);
  uStack_180 = (char *)CONCAT44(uRam00000001419e77dc,uRam00000001419e77d8);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_188);
  local_30 = &local_108;
  local_188 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_180 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_188);
  local_28 = local_f8;
  ppuVar4 = &local_38;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_168,3,ppuVar4);
  local_98 = 7;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03608);
  uStack_18c = 6;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_b8,uVar5,uVar8);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_c8,uVar5,uVar8);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_d8,uVar5,uVar8 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_188 = (undefined8 *)local_b8;
  uStack_180 = (char *)CONCAT44(uStack_ac,uStack_b0);
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_188);
  local_58 = local_158;
  local_188 = (undefined8 *)CONCAT44(uRam0000000141dc6834,_DAT_141dc6830);
  uStack_180 = (char *)CONCAT44(uRam0000000141dc683c,uRam0000000141dc6838);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  local_50 = local_148;
  local_188 = (undefined8 *)local_c8;
  uStack_180 = (char *)CONCAT44(uStack_bc,uStack_c0);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_188);
  local_48 = &local_138;
  local_188 = (undefined8 *)local_d8;
  uStack_180 = (char *)CONCAT44(uStack_cc,uStack_d0);
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_188);
  local_40 = &local_128;
  local_188 = (undefined8 *)CONCAT44(uRam00000001419e77c4,_DAT_1419e77c0);
  uStack_180 = (char *)CONCAT44(uRam00000001419e77cc,uRam00000001419e77c8);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_188);
  local_38 = &local_118;
  if (puVar2 != &local_108) {
    local_188 = (undefined8 *)*puVar2;
    uStack_180 = (char *)puVar2[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_188);
  }
  local_30 = &local_108;
  local_188 = (undefined8 *)CONCAT44(uRam00000001419e77e4,_DAT_1419e77e0);
  uStack_180 = (char *)CONCAT44(uRam00000001419e77ec,uRam00000001419e77e8);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_188);
  local_28 = local_f8;
  local_188 = (undefined8 *)CONCAT44(uRam00000001419e77c4,_DAT_1419e77c0);
  uStack_180 = (char *)CONCAT44(uRam00000001419e77cc,uRam00000001419e77c8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_188);
  local_20 = local_e8;
  FUN_140e634e0(param_1,param_2,&local_168,8,CONCAT44(uVar6,DAT_141a03648),&local_58);
  local_98 = 9;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_160 = 0;
  uStack_180 = "gml_Script_pal_swap_reset";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_15c = 5;
  local_168 = 0;
  local_178 = 0x71;
  iVar1 = FUN_140ec9d80();
  if (iVar1 != -1) {
    local_178 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_188;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

