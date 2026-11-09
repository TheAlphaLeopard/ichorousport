// gml_Script____struct___567_gml_Object_oEntity_Create_0 @ 0x140ac1c60

undefined8 *
gml_Script____struct___567_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  double dVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar11;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  double local_e0;
  uint local_d4;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_150 = "gml_Script_anon@19574@___struct___567@gml_Object_oEntity_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x35e;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_ac = 0xffffff;
  local_b8 = (undefined1 *)0x0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x35f;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87440(uVar2,DAT_141a0a928,0x80000000,&local_98,(ulonglong)pcVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  uVar11 = 0;
  puVar5 = &local_98;
  puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_168,0,&local_98,0);
  if (puVar3 != &local_f0) {
    local_c8 = (undefined1 *)*puVar3;
    uStack_c0 = (undefined4 *)puVar3[1];
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f0);
  local_148 = 0x360;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_100);
  local_148 = 0x361;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  local_104 = 0;
  local_110 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_110);
  local_148 = 0x363;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a572c0,0x80000000,&local_e0,uVar10,uVar11);
  dVar8 = local_e0;
  if ((local_d4 & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_e0);
  }
  fVar7 = (float)FUN_140e78f90(0x40400000,(float)dVar8);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)fVar7;
  local_148 = 0x364;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0xc000000000000000;
  local_148 = 0x366;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87440(uVar2,DAT_141a06298,0x80000000,&local_a8,uVar10 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  uVar11 = 0;
  puVar5 = &local_a8;
  FUN_140e63610(uVar2,param_2,&local_168,0,puVar5,0);
  local_148 = 0x368;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_148 = 0x369;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06658);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_148 = 0x36b;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0x3ff0000000000000;
  FUN_140e87930(uVar2,DAT_141a067b8,0x80000000,&local_120);
  local_148 = 0x36c;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_124 = 0;
  local_130 = 0;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_130);
  local_148 = 0x36d;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  local_134 = 0;
  local_140 = 0;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a06248,0x80000000,&local_140);
  local_148 = 0x36f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_148 = 0x370;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  FUN_140e87440(uVar1,DAT_1419ef008,0x80000000,&local_b8,(ulonglong)puVar5 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_c8 = local_b8;
  uStack_c0 = (undefined4 *)CONCAT44(uStack_ac,uStack_b0);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_c8 = local_88;
  if (puVar6 != local_78) {
    local_68 = *puVar6;
    uStack_64 = puVar6[1];
    uStack_60 = puVar6[2];
    uStack_5c = puVar6[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_68);
  }
  uStack_c0 = local_78;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_168,2,&local_c8);
  local_148 = 0x372;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f10c8);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar1,0);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

