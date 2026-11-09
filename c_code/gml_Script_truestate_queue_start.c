// gml_Script_truestate_queue_start @ 0x140628b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_truestate_queue_start
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60 [3];
  byte local_54;
  undefined8 local_50;
  byte local_44;
  
  local_70 = "gml_Script_truestate_set_default";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x30;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x33;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar2,puVar3,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0x33;
  }
  else {
    local_68 = 0x34;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f2b0);
    FUN_140e609c0(param_1);
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    if (puVar4 != puVar3) {
      local_88 = *(undefined4 *)puVar4;
      uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_80 = *(undefined4 *)(puVar4 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    FUN_140e60910(1);
    local_68 = 0x35;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00228);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00278);
    if (puVar5 != local_60) {
      local_88 = *puVar5;
      uStack_84 = puVar5[1];
      uStack_80 = puVar5[2];
      uStack_7c = puVar5[3];
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_88);
    }
    local_98 = local_60;
    if ((param_4 < 1) || (puVar8 = (undefined8 *)*param_5, puVar8 != &local_50)) {
      local_88 = *(undefined4 *)puVar8;
      uStack_84 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_80 = *(undefined4 *)(puVar8 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_88);
    }
    local_90 = &local_50;
    FUN_140e609c0(param_1);
    puVar5 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar9,DAT_1419ff4f8),&local_98);
    if (puVar5 != puVar6) {
      local_88 = *puVar5;
      uStack_84 = puVar5[1];
      uStack_80 = puVar5[2];
      uStack_7c = puVar5[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_88);
    }
    FUN_140e60910(1);
    local_68 = 0x37;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00058);
    FUN_140e609c0(param_1);
    if (puVar2 != puVar8) {
      local_88 = *(undefined4 *)puVar2;
      uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_80 = *(undefined4 *)(puVar2 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_88);
    }
    FUN_140e60910(1);
    local_68 = 0x39;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
    FUN_140e609c0(param_1);
    if (puVar2 != puVar8) {
      local_88 = *(undefined4 *)puVar2;
      uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_80 = *(undefined4 *)(puVar2 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_88);
    }
    FUN_140e60910(1);
    local_68 = 0x3a;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
    if (puVar5 != local_60) {
      local_88 = *puVar5;
      uStack_84 = puVar5[1];
      uStack_80 = puVar5[2];
      uStack_7c = puVar5[3];
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_88);
    }
    local_98 = local_60;
    if (puVar2 != &local_50) {
      local_88 = *(undefined4 *)puVar2;
      uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_80 = *(undefined4 *)(puVar2 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_88);
    }
    local_90 = &local_50;
    FUN_140ea9150(2,&local_98);
    local_68 = 0x3b;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00278);
    local_88 = _DAT_1419e6be0;
    uStack_84 = uRam00000001419e6be4;
    uStack_80 = uRam00000001419e6be8;
    uStack_7c = uRam00000001419e6bec;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_88);
    local_98 = local_60;
    FUN_140e63610(param_1,param_2,&local_a8,1,uVar7,&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

