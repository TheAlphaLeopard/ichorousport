// gml_Script_structs_equal @ 0x1405da8c0

undefined8 *
gml_Script_structs_equal
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  byte local_44;
  undefined4 local_40 [3];
  byte local_34;
  undefined8 *local_28;
  undefined4 *local_20;
  
  local_70 = "gml_Script_struct_copy_deep";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 1;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 2;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_50) goto LAB_1405da9ac;
  }
  local_a8 = *(undefined4 *)param_5;
  uStack_a4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_a0 = *(undefined4 *)(param_5 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_a8);
LAB_1405da9ac:
  local_28 = &local_50;
  uVar3 = CONCAT44(uVar4,DAT_1419ef1c8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,1,uVar3,&local_28);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != local_40) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_a8);
  }
  local_20 = local_40;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar4,DAT_141a0a298),&local_20);
  if (puVar2 != param_3) {
    local_a8 = *(undefined4 *)puVar2;
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

