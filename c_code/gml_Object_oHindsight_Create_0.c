// gml_Object_oHindsight_Create_0 @ 0x140b04680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oHindsight_Create_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 **ppuVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_b0 = "gml_Script_anon@284@gml_Object_oHemangiomaEye_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x12;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_74 = 0;
  local_80 = 0;
  local_84 = 0;
  local_90 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_c8,uVar4,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_d8,uVar4 & 0xffffffffffffff00,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = (longlong *)local_c8;
  uStack_170 = uStack_c0;
  uStack_16c = uStack_bc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_178);
  local_70 = local_148;
  local_178 = (longlong *)local_d8;
  uStack_170 = uStack_d0;
  uStack_16c = uStack_cc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_68 = local_138;
  puVar2 = (undefined8 *)FUN_140e8da20(&local_80,param_1,2,&DAT_1419eba20,&DAT_1419eba40);
  if (puVar2 != &local_128) {
    local_178 = (longlong *)*puVar2;
    uStack_170 = *(undefined4 *)(puVar2 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  local_60 = &local_128;
  puVar2 = (undefined8 *)FUN_140e8da20(&local_90,param_1,2,&DAT_1419eba30,&DAT_1419eba10);
  if (puVar2 != &local_118) {
    local_178 = (longlong *)*puVar2;
    uStack_170 = *(undefined4 *)(puVar2 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  local_58 = &local_118;
  local_178 = (longlong *)CONCAT44(uRam00000001419eba04,_DAT_1419eba00);
  uStack_170 = uRam00000001419eba08;
  uStack_16c = uRam00000001419eba0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_50 = local_108;
  puVar2 = (undefined8 *)FUN_140e8da20(&local_a0,param_1,2,&DAT_141dc7130,&DAT_141dc7130);
  if (puVar2 != &local_f8) {
    local_178 = (longlong *)*puVar2;
    uStack_170 = *(undefined4 *)(puVar2 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
  }
  local_48 = &local_f8;
  if (puVar1 != &local_e8) {
    local_178 = (longlong *)*puVar1;
    uStack_170 = *(undefined4 *)(puVar1 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
  }
  local_40 = &local_e8;
  ppuVar5 = &local_70;
  gml_Script_get_blood_col(param_1,param_2,&local_168,7,ppuVar5);
  uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  local_a8 = 0x15;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x1000002000000ba;
  local_158 = 0xba;
  uStack_154 = 0x1000002;
  uStack_150 = uStack_170;
  uStack_14c = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_158);
  local_70 = local_148;
  local_158 = _DAT_1419eb9f0;
  uStack_154 = uRam00000001419eb9f4;
  uStack_150 = uRam00000001419eb9f8;
  uStack_14c = uRam00000001419eb9fc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_158);
  local_68 = local_138;
  local_158 = _DAT_1419df7a0;
  uStack_154 = uRam00000001419df7a4;
  uStack_150 = uRam00000001419df7a8;
  uStack_14c = uRam00000001419df7ac;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_60 = &local_128;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_58 = &local_118;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  local_50 = local_108;
  local_f8 = FUN_140e794b0(0x9999999a,0x3ff3333333333333);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_48 = &local_f8;
  FUN_140e634e0(param_1,param_2,&local_168,6,CONCAT44(uVar6,DAT_141a0a2e8),&local_70);
  local_a8 = 0x17;
  FUN_140edd0e0(param_1,param_2,0,0);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
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
  _eh_vector_destructor_iterator_(local_148,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

