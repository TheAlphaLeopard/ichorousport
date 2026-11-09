// gml_Script_anon_3206____struct___136___new_lighting_system_lighting_system @ 0x1403a49a0

undefined8 *
gml_Script_anon_3206____struct___136___new_lighting_system_lighting_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  
  local_60 = "gml_Script_anon@2489@___struct___136@__new_lighting_system@lighting_system";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x48;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x49;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4f68);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5258);
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
    if (iVar1 == 0) goto LAB_1403a4e0e;
  }
  local_58 = 0x4b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f68);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  if (puVar4 != puVar3) {
    local_78 = *(undefined4 *)puVar4;
    uStack_74 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x4c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5258);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar6 = (undefined8 *)param_5[1];
  }
  if (puVar6 != puVar3) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x4e;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f54c8);
  if (puVar5 != local_50) {
    local_78 = *puVar5;
    uStack_74 = puVar5[1];
    uStack_70 = puVar5[2];
    uStack_6c = puVar5[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88[0] = local_50;
  uVar2 = CONCAT44(uVar7,DAT_141a04918);
  FUN_140e634e0(param_1,param_2,&local_98,1,uVar2,local_88);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_58 = 0x4f;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5418);
  if (puVar5 != local_50) {
    local_78 = *puVar5;
    uStack_74 = puVar5[1];
    uStack_70 = puVar5[2];
    uStack_6c = puVar5[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88[0] = local_50;
  uVar2 = CONCAT44(uVar7,DAT_141a04918);
  FUN_140e634e0(param_1,param_2,&local_98,1,uVar2,local_88);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_58 = 0x50;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5408);
  if (puVar5 != local_50) {
    local_78 = *puVar5;
    uStack_74 = puVar5[1];
    uStack_70 = puVar5[2];
    uStack_6c = puVar5[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88[0] = local_50;
  FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar7,DAT_141a04918),local_88);
  local_58 = 0x52;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f54c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
  local_58 = 0x53;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5418);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
  local_58 = 0x54;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5408);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
LAB_1403a4e0e:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

