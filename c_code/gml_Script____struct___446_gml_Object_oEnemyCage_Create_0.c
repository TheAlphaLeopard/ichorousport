// gml_Script____struct___446_gml_Object_oEnemyCage_Create_0 @ 0x14093ed70

undefined8 *
gml_Script____struct___446_gml_Object_oEnemyCage_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 **ppuVar9;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_100 [3];
  byte local_f4;
  undefined4 local_f0 [3];
  byte local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_110 = "gml_Script_anon@13750@___struct___446@gml_Object_oEnemyCage_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x276;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_100,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x277;
  uStack_8c = 0xf;
  local_98 = 0x10000010000009d;
  local_128 = 0x9d;
  uStack_124 = 0x1000001;
  uStack_120 = uStack_90;
  uStack_11c = 0xf;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_128);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_68);
  local_108 = 0x278;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b0);
  local_108 = 0x27a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_108 = 0x27b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_108 = 0x27d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_108 = 0x27e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06658);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_108 = 0x280;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0x3ff0000000000000;
  FUN_140e87930(uVar4,DAT_141a067b8,0x80000000,&local_c0);
  local_108 = 0x282;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_d0);
  local_108 = 0x283;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a06248,0x80000000,&local_e0);
  local_108 = 0x285;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57d90);
  if (puVar5 != local_100) {
    local_128 = *puVar5;
    uStack_124 = puVar5[1];
    uStack_120 = puVar5[2];
    uStack_11c = puVar5[3];
    if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_100);
    }
    FUN_140041b80(local_100,&local_128);
  }
  local_58 = local_100;
  uVar6 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar6,&local_58);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_108 = 0x286;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57d90);
    uStack_8c = 0xf;
    local_98 = 0x10000010000011b;
    local_128 = 0x11b;
    uStack_124 = 0x1000001;
    uStack_120 = uStack_90;
    uStack_11c = 0xf;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_128);
    FUN_140e86c30(uVar4,DAT_1419f5c58,0x80000000,&local_78);
  }
  local_108 = 0x287;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57e50);
  if (puVar5 != local_100) {
    local_128 = *puVar5;
    uStack_124 = puVar5[1];
    uStack_120 = puVar5[2];
    uStack_11c = puVar5[3];
    if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_100);
    }
    FUN_140041b80(local_100,&local_128);
  }
  local_58 = local_100;
  ppuVar9 = &local_58;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_108 = 0x288;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57e50);
    uStack_8c = 0xf;
    local_98 = 0x10000010000011b;
    local_128 = 0x11b;
    uStack_124 = 0x1000001;
    uStack_120 = uStack_90;
    uStack_11c = 0xf;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
    FUN_140e86c30(uVar4,DAT_1419f5c58,0x80000000,&local_88);
  }
  local_108 = 0x28a;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  FUN_140e87440(uVar2,DAT_1419ef008,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_128 = (undefined4)local_48;
  uStack_124 = local_48._4_4_;
  uStack_120 = uStack_40;
  uStack_11c = uStack_3c;
  if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_100);
  }
  FUN_140041b80(local_100,&local_128);
  local_58 = local_100;
  if (puVar5 != local_f0) {
    local_128 = *puVar5;
    uStack_124 = puVar5[1];
    uStack_120 = puVar5[2];
    uStack_11c = puVar5[3];
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f0);
    }
    FUN_140041b80(local_f0,&local_128);
  }
  local_50 = local_f0;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_138,2,&local_58);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_100,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

