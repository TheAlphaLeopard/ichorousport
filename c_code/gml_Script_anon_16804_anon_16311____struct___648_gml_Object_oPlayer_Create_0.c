// gml_Script_anon_16804_anon_16311____struct___648_gml_Object_oPlayer_Create_0 @ 0x140c05690

undefined8 *
gml_Script_anon_16804_anon_16311____struct___648_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_res8;
  code *pcVar3;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@16175@___struct___644@gml_Object_oPlayer_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x32e;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x32f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5e48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x330;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_60 = CONCAT44(0xd,(undefined4)uStack_60);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = uStack_60;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_58);
  FUN_140e87930(uVar2,DAT_1419f8488,0x80000000,&local_98);
  local_38 = 0x331;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_88,(ulonglong)pcVar3 & 0xffffffffffffff00,0);
  local_58 = local_88;
  uStack_50 = CONCAT44(uStack_7c,uStack_80);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_58);
  local_res8 = local_78;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

