// gml_Script_anon_495_gml_Object_oRogueLevelManager_Other_10 @ 0x140cdb8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_495_gml_Object_oRogueLevelManager_Other_10
          (longlong *param_1,undefined1 **param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  undefined1 **ppuVar15;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 local_120 [12];
  byte local_114;
  undefined1 local_110 [12];
  byte local_104;
  undefined1 local_100 [12];
  byte local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  uint local_88 [2];
  undefined8 *local_80;
  
  local_130 = "gml_Script_anon@33@gml_Object_oRogueLevelManager_Other_10";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 2;
  FUN_140041df0(local_88,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_120,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b20);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_90 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uVar1 = local_88[0];
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 2;
  puVar10 = &DAT_1419df7b0;
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_80;
  }
  iVar3 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_128 = 2;
    uStack_15c = 0xd;
    local_168 = 0;
    if ((int)uVar1 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_80;
      if (&local_168 == puVar9) goto LAB_140cdba9a;
    }
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = uStack_160;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_178);
  }
LAB_140cdba9a:
  local_128 = 4;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5eb8);
  local_168 = 0x3ff0000000000000;
  uStack_15c = 0xd;
  local_178 = 0;
  uStack_174 = 0x3ff00000;
  uStack_170 = uStack_160;
  uStack_16c = 0xd;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_178);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_148,param_1,param_2);
  plVar14 = param_1;
  ppuVar15 = param_2;
  FUN_140e87170(uVar8,DAT_1419fe158,0x80000000,&local_158,param_1,param_2);
  dVar12 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_158);
  }
  dVar13 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_148);
  }
  uVar4 = FUN_140e4a740(uVar7);
  uVar7 = FUN_140ea8b20(&local_188,uVar4,(longlong)dVar13,(longlong)dVar12);
  FUN_140e87930(uVar7,DAT_1419f6118,0x80000000,&local_e0);
  local_128 = 5;
  uVar11 = (ulonglong)local_88[0];
  if (0 < (int)local_88[0]) {
    puVar10 = (undefined8 *)*local_80;
  }
  cVar2 = FUN_140e491e0(puVar10);
  if (cVar2 != '\0') {
    local_128 = 6;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5eb8);
    local_168 = 0x3ff0000000000000;
    uStack_15c = 0xd;
    local_178 = 0;
    uStack_174 = 0x3ff00000;
    uStack_170 = uStack_160;
    uStack_16c = 0xd;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_178);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    FUN_140e87170(uVar8,DAT_1419fe0e8,0x80000000,&local_148,param_1,param_2);
    plVar14 = param_1;
    ppuVar15 = param_2;
    FUN_140e87170(uVar8,DAT_1419fe158,0x80000000,&local_158,param_1,param_2);
    dVar12 = local_158;
    if ((local_14c & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_158);
    }
    dVar13 = local_148;
    if ((local_13c & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_148);
    }
    uVar4 = FUN_140e4a740(uVar7);
    uVar7 = FUN_140ea8b20(&local_188,uVar4,(longlong)dVar13,(longlong)dVar12);
    FUN_140e87930(uVar7,DAT_1419f9fa8,0x80000000,&local_f0);
  }
  local_128 = 7;
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a57d10);
  FUN_140046040(uVar7);
  local_128 = 9;
  cVar2 = FUN_140e491e0(puVar5);
  if ((cVar2 != '\0') && (cVar2 = FUN_140e491e0(uVar6), cVar2 == '\0')) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9f88);
    FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_b8);
    iVar3 = FUN_140e851f0(uVar6,&local_b8,DAT_141955260,0);
    if (iVar3 == 0) {
      local_128 = 10;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uVar4 = (undefined4)((ulonglong)plVar14 >> 0x20);
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      uStack_15c = 0xf;
      local_168 = 0x100000200000138;
      local_178 = 0x138;
      uStack_174 = 0x1000002;
      uStack_170 = uStack_160;
      uStack_16c = 0xf;
      if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_120);
      }
      FUN_140041b80(local_120,&local_178);
      local_a8 = local_120;
      local_178 = _DAT_1419ed5d0;
      uStack_174 = uRam00000001419ed5d4;
      uStack_170 = uRam00000001419ed5d8;
      uStack_16c = uRam00000001419ed5dc;
      if ((1 << (local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_110);
      }
      FUN_140041b80(local_110,&local_178);
      local_a0 = local_110;
      local_178 = _DAT_1419df7a0;
      uStack_174 = uRam00000001419df7a4;
      uStack_170 = uRam00000001419df7a8;
      uStack_16c = uRam00000001419df7ac;
      if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_100);
      }
      FUN_140041b80(local_100,&local_178);
      local_98 = local_100;
      ppuVar15 = &local_a8;
      plVar14 = (longlong *)CONCAT44(uVar4,DAT_141a0a2e8);
      FUN_140e634e0(param_1,param_2,&local_188,3,plVar14,ppuVar15);
    }
  }
  local_128 = 0xc;
  uStack_15c = 0xd;
  local_168 = 0;
  if (&local_168 != puVar5) {
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = uStack_160;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_178);
  }
  local_128 = 0xd;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9f88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = &DAT_bff0000000000000;
  local_128 = 0xe;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  FUN_140e87440(local_90,DAT_1419eef18,0x80000000,&local_c8,(ulonglong)plVar14 & 0xffffffffffffff00,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  local_178 = (undefined4)local_c8;
  uStack_174 = local_c8._4_4_;
  uStack_170 = uStack_c0;
  uStack_16c = uStack_bc;
  if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_120);
  }
  FUN_140041b80(local_120,&local_178);
  local_a8 = local_120;
  local_178 = (undefined4)DAT_1419df7b0;
  uStack_174 = DAT_1419df7b0._4_4_;
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_110);
  }
  FUN_140041b80(local_110,&local_178);
  local_a0 = local_110;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_188,2,&local_a8);
  local_128 = 0xf;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_178 = _DAT_141ddaec8;
  uStack_174 = uRam0000000141ddaecc;
  uStack_170 = uRam0000000141ddaed0;
  uStack_16c = DAT_141ddaed4;
  if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_120);
  }
  FUN_140041b80(local_120,&local_178);
  local_a8 = local_120;
  gml_GlobalScript_jump_predictor(param_1,param_2,&local_188,1,&local_a8);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_120,0x10,3,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar10 = local_80;
    do {
      puVar5 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

