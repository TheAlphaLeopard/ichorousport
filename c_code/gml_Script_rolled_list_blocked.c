// gml_Script_rolled_list_blocked @ 0x1405e1590

undefined8 *
gml_Script_rolled_list_blocked(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_54;
  double local_50;
  undefined4 local_44;
  undefined8 *local_40;
  double *local_38;
  
  local_70 = "gml_Script_rolled_list";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x5b;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x5d;
  if (puVar3 != &local_60) {
    local_98 = *puVar3;
    uStack_90 = puVar3[1];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_98);
  }
  iVar1 = DAT_1419ffa58;
  local_40 = &local_60;
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  local_44 = 0;
  local_50 = (double)iVar1;
  local_38 = &local_50;
  uVar5 = CONCAT44(uVar7,DAT_141a035d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,2,uVar5,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_c8) {
    local_98 = *puVar4;
    uStack_90 = puVar4[1];
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_98);
  }
  local_68 = 0x5e;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_40 = &local_c8;
  uVar6 = CONCAT44(uVar7,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar6,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_68 = 0x60;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_a8,0,CONCAT44(uVar7,DAT_1419fd6d8),0);
    if (puVar4 != &local_c8) {
      local_98 = *puVar4;
      uStack_90 = puVar4[1];
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_98);
    }
    local_68 = 0x61;
    uStack_90 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_c8;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
    FUN_140e87930(puVar3,DAT_1419ffa58,0x80000000,&local_88);
  }
  local_68 = 99;
  if (&local_c8 != param_3) {
    uStack_90 = CONCAT44(uStack_bc,uStack_c0);
    local_98 = local_c8;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

