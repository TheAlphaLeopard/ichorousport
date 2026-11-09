// gml_GlobalScript___InputCollect @ 0x140066300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputCollect
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  longlong *local_30;
  
  local_50 = 
  "gml_Script___HistoryPush@anon@36180@__InputClassVirtualButton@__InputClassVirtualButton";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x458;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x45b;
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
  if (((*(uint *)((longlong)plVar2 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar2, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 0xb) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",10);
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(lVar1 + 8) + 0xa0);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar2 != &local_b8) {
    local_c8 = (undefined4)*plVar2;
    uStack_c4 = *(undefined4 *)((longlong)plVar2 + 4);
    uStack_c0 = (undefined4)plVar2[1];
    uStack_bc = *(undefined4 *)((longlong)plVar2 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_48 = 0x45c;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_98) goto LAB_1400664ae;
  }
  local_c8 = *(undefined4 *)puVar3;
  uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
LAB_1400664ae:
  FUN_140e86c30(&local_b8,DAT_1419fe0e8,0x80000000,&local_98);
  local_48 = 0x45d;
  if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_a8)) {
    local_c8 = *(undefined4 *)puVar6;
    uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  FUN_140e86c30(&local_b8,DAT_1419fe158,0x80000000,&local_a8);
  local_48 = 0x45f;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
  if (puVar4 != local_88) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_c8);
  }
  local_40 = local_88;
  local_c8 = _DAT_1419df8b0;
  uStack_c4 = uRam00000001419df8b4;
  uStack_c0 = uRam00000001419df8b8;
  uStack_bc = uRam00000001419df8bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_c8);
  local_38 = local_78;
  local_c8 = _DAT_1419df8c0;
  uStack_c4 = uRam00000001419df8c4;
  uStack_c0 = uRam00000001419df8c8;
  uStack_bc = uRam00000001419df8cc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_c8);
  local_30 = (longlong *)local_68;
  uVar5 = CONCAT44(uVar7,DAT_1419fd808);
  FUN_140e634e0(param_1,param_2,&local_d8,3,uVar5,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_48 = 0x460;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if (puVar4 != local_88) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_c8);
  }
  local_40 = local_88;
  local_c8 = _DAT_141dc5ff0;
  uStack_c4 = uRam0000000141dc5ff4;
  uStack_c0 = uRam0000000141dc5ff8;
  uStack_bc = uRam0000000141dc5ffc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_c8);
  local_38 = local_78;
  local_30 = &local_b8;
  FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar7,DAT_1419fe1d8),&local_40);
  local_48 = 0x462;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe848);
  FUN_140046040(uVar5);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

