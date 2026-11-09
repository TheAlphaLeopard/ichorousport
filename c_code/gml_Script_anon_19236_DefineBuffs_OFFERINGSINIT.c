// gml_Script_anon_19236_DefineBuffs_OFFERINGSINIT @ 0x1403d8100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_19236_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  double dVar8;
  code *pcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffdd0;
  ulonglong uVar12;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined4 local_128 [3];
  byte local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  
  local_c0 = "gml_Script_anon@18786@anon@18385@DefineBuffs@OFFERINGSINIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x305;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_198,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_58 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5f88);
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_20c = 0;
  local_218 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x307;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar3,DAT_1419f5f98,0x80000000,&local_d8,(ulonglong)pcVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  FUN_140e87170(&local_d8,DAT_1419fe0e8,0x80000000,&local_1c8,param_1,param_2);
  local_1fc = 0xf;
  local_208 = 0x1000000000000ee;
  plVar10 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = local_1bc;
  local_200 = local_1c0;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
    local_208 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_208,&local_1c8);
  }
  FUN_1400462a0(&local_208,&local_e8);
  if ((local_1fc & 0xffffff) == 0) {
    uVar7 = (undefined4)local_208;
  }
  else {
    uVar7 = FUN_140e4b060(&local_208);
  }
  dVar8 = (double)FUN_140e79500(uVar7);
  if (dVar8 <= 0.5) {
    local_a4 = 0;
    local_b0 = 0x4066800000000000;
    puVar6 = &local_b0;
  }
  else {
    uStack_1dc = 0;
    local_1e8 = 0;
    puVar6 = &local_1e8;
  }
  uVar1 = local_a4;
  uVar7 = uStack_1dc;
  local_228 = *(undefined4 *)puVar6;
  uStack_224 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_220 = *(undefined4 *)(puVar6 + 1);
  uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_228);
  if (dVar8 <= 0.5) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
  }
  if ((0.5 < dVar8) && ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_b8 = 0x309;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
  FUN_140e87440(local_58,DAT_141a1f480,0x80000000,&local_f8,uVar11,uVar12);
  puVar6 = &DAT_1419df7b0;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  if (param_4 < 1) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a1f440,0x80000000,&local_1a8,uVar11,uVar12);
    puVar5 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*param_5,DAT_141a1f440,0x80000000,&local_1a8,uVar11,uVar12);
    puVar5 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_1b8,uVar11 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  plVar10 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_1b8,DAT_141a0a828,0x80000000,&local_108,param_1,param_2);
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_1b8,uVar11,uVar12);
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_1b8,DAT_141a0a7d8,0x80000000,&local_118,uVar11,uVar12 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar11 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1e8,gml_Script_anon_18385_DefineBuffs_OFFERINGSINIT,0);
  if (&local_1e8 != puVar2) {
    local_228 = (undefined4)local_1e8;
    uStack_224 = local_1e8._4_4_;
    uStack_220 = uStack_1e0;
    uStack_21c = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_228);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_198) {
    local_228 = *(undefined4 *)puVar2;
    uStack_224 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_220 = *(undefined4 *)(puVar2 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_228);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_98 = &local_198;
  local_228 = (undefined4)local_1a8;
  uStack_224 = local_1a8._4_4_;
  uStack_220 = uStack_1a0;
  uStack_21c = uStack_19c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_228);
  local_90 = local_188;
  local_88 = &local_1d8;
  local_228 = (undefined4)local_108;
  uStack_224 = local_108._4_4_;
  uStack_220 = uStack_100;
  uStack_21c = uStack_fc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_228);
  local_80 = local_168;
  local_228 = (undefined4)local_118;
  uStack_224 = local_118._4_4_;
  uStack_220 = uStack_110;
  uStack_21c = uStack_10c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_228);
  local_78 = local_158;
  if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_148)) {
    local_228 = *(undefined4 *)puVar6;
    uStack_224 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_220 = *(undefined4 *)(puVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
  }
  local_70 = &local_148;
  local_228 = (undefined4)local_f8;
  uStack_224 = local_f8._4_4_;
  uStack_220 = uStack_f0;
  uStack_21c = uStack_ec;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_228);
  local_68 = local_138;
  puVar4 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_1f8,6,CONCAT44(uVar7,DAT_1419fd6d8),&local_98);
  if (puVar4 != local_128) {
    local_228 = *puVar4;
    uStack_224 = puVar4[1];
    uStack_220 = puVar4[2];
    uStack_21c = puVar4[3];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_228);
  }
  local_60 = local_128;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_218,2,&local_68);
  local_b8 = 0x311;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_228 = (undefined4)DAT_1419df7b0;
  uStack_224 = DAT_1419df7b0._4_4_;
  uStack_220 = DAT_1419df7b8;
  uStack_21c = DAT_1419df7bc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_228);
  local_98 = &local_198;
  local_228 = (undefined4)DAT_1419df7b0;
  uStack_224 = DAT_1419df7b0._4_4_;
  uStack_220 = DAT_1419df7b8;
  uStack_21c = DAT_1419df7bc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_228);
  local_90 = local_188;
  gml_Script_IK_documentation(param_1,param_2,&local_218,2,&local_98);
  local_b8 = 0x312;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_228 = _DAT_1419e4850;
  uStack_224 = uRam00000001419e4854;
  uStack_220 = uRam00000001419e4858;
  uStack_21c = uRam00000001419e485c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_228);
  local_98 = &local_198;
  local_228 = _DAT_1419e47f0;
  uStack_224 = uRam00000001419e47f4;
  uStack_220 = uRam00000001419e47f8;
  uStack_21c = uRam00000001419e47fc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_228);
  local_90 = local_188;
  local_88 = &local_1d8;
  local_228 = (undefined4)DAT_1419df7b0;
  uStack_224 = DAT_1419df7b0._4_4_;
  uStack_220 = DAT_1419df7b8;
  uStack_21c = DAT_1419df7bc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_228);
  local_80 = local_168;
  FUN_14044e5b0(param_1,param_2,&local_218,4,&local_98);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

