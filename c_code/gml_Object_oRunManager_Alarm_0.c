// gml_Object_oRunManager_Alarm_0 @ 0x140d47b50

undefined8 *
gml_Object_oRunManager_Alarm_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 *local_res18 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Script_anon@5070@gml_Object_oRunManager_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0xd4;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0xd6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ffbe8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd9c8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ffca8);
  local_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_b0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_b8,puVar3);
  }
  uStack_8c = 0;
  local_98 = 0x4008000000000000;
  FUN_140046500(&local_b8,&local_98);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_d0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_d8,puVar1);
  }
  FUN_1400460e0(&local_d8,uVar2);
  uStack_bc = local_cc;
  uStack_c0 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_c8 = local_d8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_d8);
  }
  FUN_140046500(&local_c8,&local_b8);
  local_98 = local_c8;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_98);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_res18[0] = local_a8;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar4,DAT_1419fe728),local_res18);
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar4 = (undefined4)*puVar1;
  }
  else {
    uVar4 = FUN_140e4b060(puVar1);
  }
  uVar2 = FUN_140e78ec0(uVar4,0,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = uVar2;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

