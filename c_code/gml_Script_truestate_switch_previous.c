// gml_Script_truestate_switch_previous @ 0x140629460

undefined8 *
gml_Script_truestate_switch_previous(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  
  local_70 = "gml_Script_truestate_queue_start";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x50;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  uVar5 = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x52;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00108);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a000e8);
  if (puVar2 != &local_60) {
    local_98 = *puVar2;
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    FUN_140041b80(&local_60,&local_98);
  }
  local_88 = &local_60;
  FUN_140e609c0(param_1);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar6,DAT_141a00128),&local_88);
  uStack_8c = 0;
  local_98 = 0;
  iVar1 = FUN_140e851f0(uVar4,&local_98,DAT_141955260,1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar3);
  }
  *(undefined4 *)((longlong)plVar3 + 0xc) = 0xd;
  if (0 < iVar1) {
    uVar5 = 0x3ff00000;
  }
  *plVar3 = (ulonglong)uVar5 << 0x20;
  FUN_140e60910(1);
  local_68 = 0x53;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_98 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_98);
  local_88 = &local_60;
  local_98 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_98);
  local_80 = local_50;
  gml_Script_truestate_begin_step(param_1,param_2,&local_a8,2,&local_88);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

