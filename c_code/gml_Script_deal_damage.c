// gml_Script_deal_damage @ 0x140275f00

undefined8 * gml_Script_deal_damage(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_res18;
  undefined4 uVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_OwnerId";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x30;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x32;
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar4 != &local_78) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_88);
  }
  local_res18 = &local_78;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar6,DAT_141a02ef8),&local_res18);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_90 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_98 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_98,puVar4);
    }
    puVar4 = &local_98;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    FUN_140e87170(uVar5,DAT_141a0a828,0x80000000,&local_a8,param_1,param_2);
    uStack_7c = local_9c;
    uStack_80 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_88 = local_a8;
    }
    else {
      FUN_1400419b0(&local_88,&local_a8);
    }
    puVar4 = &local_88;
  }
  if (puVar4 != param_3) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if (bVar1) {
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

