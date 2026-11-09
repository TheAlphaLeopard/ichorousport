// gml_Object_oBloodFly_Create_0 @ 0x1406b73d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodFly_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70 [4];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Object_oBloodDropManager_Other_4";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_78 = 2;
  while( true ) {
    uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c48);
    if (((*(int *)((longlong)plVar1 + 0xc) != 2) || (*plVar1 == 0)) ||
       (*(int *)(*plVar1 + 0x24) < 1)) break;
    local_78 = 4;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5c48);
    FUN_140e609c0(param_1);
    puVar3 = (undefined8 *)FUN_140e48e40(puVar2,0);
    FUN_140e609c0(*(undefined8 *)*puVar2);
    if (puVar3 != &DAT_1419df7b0) {
      local_98 = (undefined4)DAT_1419df7b0;
      uStack_94 = DAT_1419df7b0._4_4_;
      uStack_90 = DAT_1419df7b8;
      uStack_8c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_98);
    }
    FUN_140e60910(2);
    local_78 = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c48);
    if (puVar4 != local_70) {
      local_98 = *puVar4;
      uStack_94 = puVar4[1];
      uStack_90 = puVar4[2];
      uStack_8c = puVar4[3];
      if ((1 << ((byte)local_70[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_70);
      }
      FUN_140041b80(local_70,&local_98);
    }
    local_40 = local_70;
    local_98 = _DAT_141dc6810;
    uStack_94 = uRam0000000141dc6814;
    uStack_90 = uRam0000000141dc6818;
    uStack_8c = uRam0000000141dc681c;
    if ((1 << (local_60[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_98);
    local_38 = local_60;
    local_98 = _DAT_1419e76f0;
    uStack_94 = uRam00000001419e76f4;
    uStack_90 = uRam00000001419e76f8;
    uStack_8c = uRam00000001419e76fc;
    if ((1 << (local_50[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_98);
    local_30 = local_50;
    pcVar6 = (code *)CONCAT44(uVar7,DAT_1419fd808);
    FUN_140e634e0(param_1,param_2,&local_a8,3,pcVar6,&local_40);
  }
  local_78 = 9;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5c48);
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e8da20(&local_a8,param_1,0);
  if (puVar5 != puVar4) {
    local_98 = *puVar5;
    uStack_94 = puVar5[1];
    uStack_90 = puVar5[2];
    uStack_8c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_98);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

