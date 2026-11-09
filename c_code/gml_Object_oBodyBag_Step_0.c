// gml_Object_oBodyBag_Step_0 @ 0x1406f0230

undefined8 * gml_Object_oBodyBag_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_res18 [2];
  undefined4 uVar5;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@1922@___struct___323@gml_Object_oBodyBag_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x6c;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x6d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  if (puVar1 != &local_88) {
    local_78 = *puVar1;
    uStack_70 = *(undefined4 *)(puVar1 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_78);
  }
  local_res18[0] = &local_88;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar5,DAT_141a00e28),local_res18);
  uStack_6c = 0;
  local_78 = 0xbfc999999999999a;
  FUN_140042560(&local_78,uVar2);
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_68);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x6f;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3c8);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar2,&local_98);
  FUN_140e60910(1);
  local_48 = 0x70;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3c8);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar4,uVar3);
  FUN_140e60910(1);
  local_48 = 0x72;
  uStack_6c = 0;
  local_78 = 0x3fef5c28f5c28f5c;
  FUN_140042560(uVar2,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x73;
  if (puVar1 != &local_a8) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_68);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_a8);
  local_48 = 0x75;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_b8,0,uVar2,0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

