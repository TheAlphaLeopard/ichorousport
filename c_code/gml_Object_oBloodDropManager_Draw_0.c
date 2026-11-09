// gml_Object_oBloodDropManager_Draw_0 @ 0x1406b59e0

undefined8 *
gml_Object_oBloodDropManager_Draw_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar10;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 **ppuVar11;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108 [3];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_anon@5819@gml_Object_oBloodDropManager_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x101;
  FUN_140041df0(local_48,param_4,5,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_108,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_7c = 0xffffff;
  local_88 = 0;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a032c8);
  local_14c = 0;
  local_158 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x101;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[4];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_98 = 0x101;
    if ((int)local_48[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_40[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0xc010000000000000;
  }
  local_98 = 0x103;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1dc60);
  if (puVar4 != local_108) {
    local_148 = *puVar4;
    uStack_144 = puVar4[1];
    uStack_140 = puVar4[2];
    uStack_13c = puVar4[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
  }
  local_78 = local_108;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1406b5c02:
    local_148 = *(undefined4 *)puVar5;
    uStack_144 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_f8) goto LAB_1406b5c02;
  }
  local_70 = &local_f8;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1406b5c51:
    local_148 = *(undefined4 *)puVar5;
    uStack_144 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_e8) goto LAB_1406b5c51;
  }
  local_68 = &local_e8;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1406b5ca0:
    local_148 = *(undefined4 *)puVar5;
    uStack_144 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 != &local_d8) goto LAB_1406b5ca0;
  }
  local_60 = &local_d8;
  if ((int)local_48[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[3];
    if (puVar5 == &local_c8) goto LAB_1406b5d1f;
  }
  local_148 = *(undefined4 *)puVar5;
  uStack_144 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_140 = *(undefined4 *)(puVar5 + 1);
  uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_148);
LAB_1406b5d1f:
  local_58 = &local_c8;
  if (((int)local_48[0] < 5) || (puVar6 = (undefined8 *)local_40[4], puVar6 != &local_b8)) {
    local_148 = *(undefined4 *)puVar6;
    uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  local_50 = &local_b8;
  uVar8 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,6,uVar8,&local_78);
  uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar6 != &local_138) {
    local_148 = *(undefined4 *)puVar6;
    uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
  }
  local_98 = 0x104;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c48);
  if (puVar4 != local_108) {
    local_148 = *puVar4;
    uStack_144 = puVar4[1];
    uStack_140 = puVar4[2];
    uStack_13c = puVar4[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
  }
  local_78 = local_108;
  local_70 = &local_138;
  ppuVar11 = &local_78;
  uVar9 = CONCAT44(uVar10,DAT_1419fe568);
  FUN_140e634e0(param_1,param_2,&local_158,2,uVar9,ppuVar11);
  local_98 = 0x106;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419ef188,0x80000000,&local_88,uVar9,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_148,gml_Object_oBloodDropManager_Other_4,0);
  if (&local_148 != puVar3) {
    local_118 = local_148;
    uStack_114 = uStack_144;
    uStack_110 = uStack_140;
    uStack_10c = uStack_13c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  FUN_140e60910(1);
  if (puVar3 != local_108) {
    local_118 = *puVar3;
    uStack_114 = puVar3[1];
    uStack_110 = puVar3[2];
    uStack_10c = puVar3[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_118);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_78 = local_108;
  local_70 = &local_138;
  local_118 = (undefined4)local_88;
  uStack_114 = local_88._4_4_;
  uStack_110 = uStack_80;
  uStack_10c = uStack_7c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_118);
  local_68 = &local_e8;
  puVar6 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar10,DAT_1419fd6d8),&local_78);
  if (puVar6 != &local_d8) {
    local_118 = *(undefined4 *)puVar6;
    uStack_114 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_110 = *(undefined4 *)(puVar6 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  local_60 = &local_d8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_158,2,&local_68);
  local_98 = 0x108;
  if (&local_138 != param_3) {
    local_118 = (undefined4)local_138;
    uStack_114 = local_138._4_4_;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,6,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar6 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

