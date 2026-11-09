// gml_Object_oEnemyCage_Create_0 @ 0x140926d60

undefined8 *
gml_Object_oEnemyCage_Create_0
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  double local_1e8;
  undefined4 local_1dc;
  double local_1d8;
  uint local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  double *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  
  local_130 = "gml_Script_anon@557@gml_Object_oElectric_Alarm_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x1c;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_178 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_13c = 0xffffff;
  local_148 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419efd48);
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x1e;
  puVar4 = &DAT_1419df7b0;
  uVar10 = param_1;
  uVar12 = param_2;
  if (param_4 < 1) {
    FUN_140e87170(&DAT_1419df7b0,DAT_1419fe0e8,0x80000000,&local_1c8,param_1,param_2);
    FUN_140e87170(&DAT_1419df7b0,DAT_1419fe158,0x80000000,&local_1d8,param_1,param_2);
    puVar3 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87170(*param_5,DAT_1419fe0e8,0x80000000,&local_1c8,param_1,param_2);
    FUN_140e87170(*param_5,DAT_1419fe158,0x80000000,&local_1d8,param_1,param_2);
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar3,DAT_141a1f440,0x80000000,&local_208,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uVar10 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_188,param_1,param_2);
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar3,DAT_141a1f440,0x80000000,&local_208,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uVar10 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_208,DAT_1419fe158,0x80000000,&local_198,param_1,param_2);
  dVar6 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_198);
  }
  dVar7 = local_188;
  if ((local_17c & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_188);
  }
  dVar8 = local_1d8;
  if ((local_1cc & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_1d8);
  }
  dVar9 = local_1c8;
  if ((local_1bc & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_1c8);
  }
  fVar5 = (float)FUN_140e793d0((float)dVar9,(float)dVar8,(float)dVar7,(float)dVar6);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = (double)fVar5;
  local_128 = 0x20;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(local_178,DAT_141a1f480,0x80000000,&local_148,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  if (param_4 < 1) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a1f440,0x80000000,&local_208,uVar10,uVar12);
    puVar3 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*param_5,DAT_141a1f440,0x80000000,&local_208,uVar10,uVar12);
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar3,DAT_141a1f4e0,0x80000000,&local_1a8,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uVar10 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_1a8,DAT_141a0a828,0x80000000,&local_158,param_1,param_2);
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar3,DAT_141a1f4e0,0x80000000,&local_1a8,uVar10,uVar12);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_141a0a7d8,0x80000000,&local_168,uVar10,uVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_178,gml_Object_oElectric_Step_0,0);
  if (&local_178 != puVar1) {
    local_218 = (undefined4)local_178;
    uStack_214 = local_178._4_4_;
    uStack_210 = uStack_170;
    uStack_20c = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_218);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_118) {
    local_218 = *(undefined4 *)puVar1;
    uStack_214 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_210 = *(undefined4 *)(puVar1 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_218);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_98 = &local_118;
  local_218 = (undefined4)local_208;
  uStack_214 = local_208._4_4_;
  uStack_210 = uStack_200;
  uStack_20c = uStack_1fc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_218);
  local_90 = local_108;
  local_88 = &local_1e8;
  local_218 = (undefined4)local_158;
  uStack_214 = local_158._4_4_;
  uStack_210 = uStack_150;
  uStack_20c = uStack_14c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_218);
  local_80 = local_e8;
  local_218 = (undefined4)local_168;
  uStack_214 = local_168._4_4_;
  uStack_210 = uStack_160;
  uStack_20c = uStack_15c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_218);
  local_78 = local_d8;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_c8)) {
    local_218 = *(undefined4 *)puVar4;
    uStack_214 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_210 = *(undefined4 *)(puVar4 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_218);
  }
  local_70 = &local_c8;
  local_218 = (undefined4)local_148;
  uStack_214 = local_148._4_4_;
  uStack_210 = uStack_140;
  uStack_20c = uStack_13c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_218);
  local_68 = local_b8;
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_1f8,6,CONCAT44(uVar11,DAT_1419fd6d8),&local_98);
  if (puVar2 != local_a8) {
    local_218 = *puVar2;
    uStack_214 = puVar2[1];
    uStack_210 = puVar2[2];
    uStack_20c = puVar2[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_218);
  }
  local_60 = local_a8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_1b8,2,&local_68);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

