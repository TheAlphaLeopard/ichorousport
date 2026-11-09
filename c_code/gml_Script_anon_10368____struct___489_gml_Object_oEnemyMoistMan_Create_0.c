// gml_Script_anon_10368____struct___489_gml_Object_oEnemyMoistMan_Create_0 @ 0x1409ec700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_10368____struct___489_gml_Object_oEnemyMoistMan_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *local_res18;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@10229@___struct___488@gml_Object_oEnemyMoistMan_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x22e;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x22f;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f12d8,0x80000000,&local_68,uVar5,in_stack_ffffffffffffff50);
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res18 = local_98;
  FUN_140edd0e0(param_1,param_2,1,&local_res18);
  local_38 = 0x230;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f1348);
  FUN_140e87440(uVar1,DAT_141a580f0,0x80000000,&local_78,uVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  uVar1 = FUN_140069500(uVar1);
  puVar2 = &local_78;
  FUN_140e63610(uVar1,param_2,&local_a8,0,puVar2,0);
  uVar6 = (undefined4)((ulonglong)puVar2 >> 0x20);
  local_38 = 0x231;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1258);
  local_58 = _DAT_141dc6ef0;
  uStack_54 = uRam0000000141dc6ef4;
  uStack_50 = uRam0000000141dc6ef8;
  uStack_4c = uRam0000000141dc6efc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res18 = local_98;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar6,DAT_141a0a0d8),&local_res18);
  uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_80 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_88,puVar3);
  }
  uStack_4c = 7;
  local_58 = 5;
  FUN_140042560(&local_88,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (&local_88 != puVar2) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

