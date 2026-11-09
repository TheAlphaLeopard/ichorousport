// gml_Object_oBloodManager_Draw_0 @ 0x1406d3d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodManager_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Object_oBloodManager_CleanUp_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_1c = 0xffffff;
  local_28 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_38 = 1;
  uStack_8c = 6;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_98 = param_1;
  FUN_140e87440(&local_98,DAT_141a0a828,0x80000000,&local_28,uVar5,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = (longlong *)local_28;
  uStack_90 = uStack_20;
  uStack_8c = uStack_1c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_98);
  local_58 = &local_88;
  local_98 = (longlong *)CONCAT44(uRam0000000141dd5d3c,_DAT_141dd5d38);
  uStack_90 = uRam0000000141dd5d40;
  uStack_8c = DAT_141dd5d44;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_98);
  local_50 = &local_78;
  uVar6 = CONCAT44(uVar7,DAT_141a56cf0);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_a8,2,uVar6,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_38 = 1;
  }
  else {
    local_38 = 2;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04448);
    if (puVar3 != &local_88) {
      local_98 = (longlong *)*puVar3;
      uStack_90 = *(undefined4 *)(puVar3 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_98);
    }
    local_58 = &local_88;
    uVar6 = CONCAT44(uVar7,DAT_141a04798);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,&local_58);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      local_38 = 2;
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      local_68 = 0;
      local_60 = 0;
      local_5c = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04448);
      if (puVar3 != &local_78) {
        local_98 = (longlong *)*puVar3;
        uStack_90 = *(undefined4 *)(puVar3 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_98);
      }
      local_50 = &local_78;
      uVar2 = CONCAT44(uVar7,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_68,1,uVar2,&local_50);
      uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    local_38 = 3;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03728);
    if (puVar3 != &local_88) {
      local_98 = (longlong *)*puVar3;
      uStack_90 = *(undefined4 *)(puVar3 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_98);
    }
    local_58 = &local_88;
    uVar6 = CONCAT44(uVar7,DAT_141a04798);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,&local_58);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      local_38 = 3;
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      local_68 = 0;
      local_60 = 0;
      local_5c = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03728);
      if (puVar3 != &local_78) {
        local_98 = (longlong *)*puVar3;
        uStack_90 = *(undefined4 *)(puVar3 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_98);
      }
      local_50 = &local_78;
      uVar2 = CONCAT44(uVar7,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_68,1,uVar2,&local_50);
      uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    local_38 = 4;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03ae8);
    if (puVar3 != &local_88) {
      local_98 = (longlong *)*puVar3;
      uStack_90 = *(undefined4 *)(puVar3 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_98);
    }
    local_58 = &local_88;
    uVar6 = CONCAT44(uVar7,DAT_141a04798);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,&local_58);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      local_38 = 4;
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      local_68 = 0;
      local_60 = 0;
      local_5c = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03ae8);
      if (puVar3 != &local_78) {
        local_98 = (longlong *)*puVar3;
        uStack_90 = *(undefined4 *)(puVar3 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_98);
      }
      local_50 = &local_78;
      uVar2 = CONCAT44(uVar7,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_68,1,uVar2,&local_50);
      uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    local_38 = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f75a8);
    if (puVar3 != &local_88) {
      local_98 = (longlong *)*puVar3;
      uStack_90 = *(undefined4 *)(puVar3 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_98);
    }
    local_58 = &local_88;
    uVar2 = CONCAT44(uVar7,DAT_141a03c88);
    FUN_140e634e0(param_1,param_2,&local_a8,1,uVar2,&local_58);
    uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_38 = 6;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if (puVar3 != &local_88) {
      local_98 = (longlong *)*puVar3;
      uStack_90 = *(undefined4 *)(puVar3 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_98);
    }
    local_58 = &local_88;
    FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar7,DAT_1419f5968),&local_58);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
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

