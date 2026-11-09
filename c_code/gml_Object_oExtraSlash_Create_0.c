// gml_Object_oExtraSlash_Create_0 @ 0x140ac9640

void gml_Object_oExtraSlash_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  longlong *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Object_oEntity_CleanUp_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_1c = 0xffffff;
  local_28 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_38 = 7;
  uStack_8c = 6;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_141a0a828,0x80000000,&local_28,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = local_28;
  uStack_90 = uStack_20;
  uStack_8c = uStack_1c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_98);
  local_68 = &local_88;
  ppuVar5 = &local_68;
  gml_Script___add_listener_anon_940_SignalController_SIGNALS(param_1,param_2,&local_a8,1,ppuVar5);
  uVar7 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  local_38 = 9;
  FUN_140e98b30(param_1,param_2);
  local_38 = 0xb;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
  if (puVar2 != &local_88) {
    local_98 = (longlong *)*puVar2;
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
  }
  local_68 = &local_88;
  uVar3 = CONCAT44(uVar7,DAT_1419f6038);
  FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_38 = 0xc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
  if (puVar2 != &local_88) {
    local_98 = (longlong *)*puVar2;
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
  }
  local_68 = &local_88;
  uVar3 = CONCAT44(uVar7,DAT_1419f6038);
  FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_38 = 0xd;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09658);
  if (puVar2 != &local_88) {
    local_98 = (longlong *)*puVar2;
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
  }
  local_68 = &local_88;
  uVar3 = CONCAT44(uVar7,DAT_1419f29f8);
  FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_38 = 0xe;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f26c8);
  if (puVar2 != &local_88) {
    local_98 = (longlong *)*puVar2;
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
  }
  local_68 = &local_88;
  uVar6 = CONCAT44(uVar7,DAT_1419f59e8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,&local_68);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_38 = 0xe;
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    local_58 = 0;
    local_50 = 0;
    local_4c = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f26c8);
    if (puVar2 != &local_78) {
      local_98 = (longlong *)*puVar2;
      uStack_90 = *(undefined4 *)(puVar2 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_98);
    }
    local_60 = &local_78;
    FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar7,DAT_1419f5968),&local_60);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_1c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_28);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

