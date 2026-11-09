// gml_Script_length_anon_9776_vec3_Vect2 @ 0x14063f640

undefined8 *
gml_Script_length_anon_9776_vec3_Vect2
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar5;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 **ppuVar6;
  longlong *local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [3];
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  byte local_5c;
  uint local_58 [3];
  byte local_4c;
  undefined1 *local_40;
  uint *local_38;
  
  local_f0 = "gml_Script_modulo@anon@9234@vec3@Vect2";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x13a;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108[0] = 0;
  local_108[1] = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x13d;
  local_88 = DAT_141a00788 & 0xffffff;
  uStack_84 = (int)(DAT_141a00788 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_84 == 0xf) {
    uStack_84 = 0x4000004;
  }
  else {
    uStack_84 = uStack_84 | 0x1000000;
  }
  uStack_11c = 0xf;
  local_128 = (longlong *)(CONCAT44(uStack_84,DAT_141a00788) & 0xffffffff00ffffff);
  uStack_80 = uStack_120;
  uStack_7c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  local_40 = local_68;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_58) goto LAB_14063f7f1;
  }
  local_88 = *puVar1;
  uStack_84 = puVar1[1];
  uStack_80 = puVar1[2];
  uStack_7c = puVar1[3];
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_88);
LAB_14063f7f1:
  ppuVar6 = &local_40;
  uVar3 = CONCAT44(uVar5,DAT_1419fd6d8);
  local_38 = local_58;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar3,ppuVar6);
  if (puVar1 != local_108) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_88);
  }
  local_e8 = 0x13e;
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_d0,uVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  plVar4 = param_1;
  uVar3 = param_2;
  FUN_140e87170(local_108,DAT_1419fe0e8,0x80000000,&local_a0,param_1,param_2);
  FUN_140046880(&local_d0,&local_a0);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d0);
  local_e8 = 0x13f;
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_e0,(ulonglong)plVar4 & 0xffffffffffffff00
                ,uVar3 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  plVar4 = param_1;
  uVar3 = param_2;
  FUN_140e87170(local_108,DAT_1419fe158,0x80000000,&local_b0,param_1,param_2);
  FUN_140046880(&local_e0,&local_b0);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e0);
  local_e8 = 0x140;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ca8);
  FUN_140e87440(local_108,DAT_141a05ca8,0x80000000,&local_c0,(ulonglong)plVar4 & 0xffffffffffffff00,
                uVar3 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  FUN_140046880(uVar2,&local_c0);
  FUN_140e60910(1);
  local_e8 = 0x141;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a008d8);
  FUN_140e63610(param_1,param_2,&local_118,0,uVar2,0);
  local_e8 = 0x142;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

