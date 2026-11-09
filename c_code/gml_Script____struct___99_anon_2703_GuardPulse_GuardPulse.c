// gml_Script____struct___99_anon_2703_GuardPulse_GuardPulse @ 0x1402924c0

undefined8 *
gml_Script____struct___99_anon_2703_GuardPulse_GuardPulse
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  byte local_74;
  undefined4 local_70 [3];
  byte local_64;
  undefined4 local_60 [3];
  byte local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  
  local_90 = "gml_Script_anon@2496@GuardPulse@GuardPulse";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x53;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a58040);
  local_44 = 0;
  local_50 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x54;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58110);
  uStack_9c = 0xd;
  local_a8 = 0x3ff0000000000000;
  if (&local_a8 != puVar2) {
    local_d8 = 0;
    uStack_d4 = 0x3ff00000;
    uStack_d0 = uStack_a0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_d8);
  }
  local_88 = 0x55;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58080);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 0x56;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58100);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e8da20(&local_50,param_1,0);
  if (puVar4 != puVar3) {
    local_d8 = *puVar4;
    uStack_d4 = puVar4[1];
    uStack_d0 = puVar4[2];
    uStack_cc = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  FUN_140e60910(1);
  local_88 = 0x57;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_a8,gml_Script_anon_2632_GuardPulse_GuardPulse,0);
  if (&local_a8 != puVar1) {
    local_d8 = (undefined4)local_a8;
    uStack_d4 = local_a8._4_4_;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_80) {
    local_d8 = *(undefined4 *)puVar1;
    uStack_d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_d8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_40 = &local_80;
  if (puVar3 != local_70) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_d8);
  }
  local_38 = local_70;
  uVar5 = CONCAT44(uVar6,DAT_1419fd6d8);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar5,&local_40);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != local_60) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_d8);
  }
  local_30 = local_60;
  FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar6,DAT_1419fe568),&local_38);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

