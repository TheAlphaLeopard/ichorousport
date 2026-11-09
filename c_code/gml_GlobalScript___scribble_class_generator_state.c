// gml_GlobalScript___scribble_class_generator_state @ 0x140146ef0

undefined8 *
gml_GlobalScript___scribble_class_generator_state
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  undefined4 local_40 [3];
  byte local_34;
  
  local_60 = "gml_Script___destroy@anon@5865@__scribble_class_font@__scribble_class_font";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xa6;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xaa;
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06148);
  if (puVar2 != local_50) {
    local_78 = *puVar2;
    uStack_74 = puVar2[1];
    uStack_70 = puVar2[2];
    uStack_6c = puVar2[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  uVar4 = CONCAT44(uVar6,DAT_141a01ab8);
  FUN_140e634e0(param_1,param_2,&local_98,1,uVar4,&local_88);
  uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_58 = 0xab;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06328);
  if (puVar2 != local_50) {
    local_78 = *puVar2;
    uStack_74 = puVar2[1];
    uStack_70 = puVar2[2];
    uStack_6c = puVar2[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  uVar4 = CONCAT44(uVar6,DAT_141a06368);
  FUN_140e634e0(param_1,param_2,&local_98,1,uVar4,&local_88);
  uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_58 = 0xad;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06458);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a064f8);
  if (puVar2 != local_50) {
    local_78 = *puVar2;
    uStack_74 = puVar2[1];
    uStack_70 = puVar2[2];
    uStack_6c = puVar2[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  if (puVar3 != local_40) {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_78);
  }
  local_80 = local_40;
  uVar4 = CONCAT44(uVar6,DAT_141a01f38);
  FUN_140e634e0(param_1,param_2,&local_98,2,uVar4,&local_88);
  uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_58 = 0xaf;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06468);
  iVar1 = FUN_140e851f0(uVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 != 0) {
    local_58 = 0xb1;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06468);
    if (puVar2 != local_50) {
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_78);
    }
    local_88 = local_50;
    FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar6,DAT_141a064b8),&local_88);
    local_58 = 0xb2;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06468);
    FUN_140e609c0(param_1);
    if (puVar5 != &DAT_1419df7b0) {
      local_78 = (undefined4)DAT_1419df7b0;
      uStack_74 = DAT_1419df7b0._4_4_;
      uStack_70 = DAT_1419df7b8;
      uStack_6c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_78);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

