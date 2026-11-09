// gml_Script_anon_106_gml_Object_oCheckTutorial_Create_0 @ 0x1408a2790

undefined8 *
gml_Script_anon_106_gml_Object_oCheckTutorial_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *local_res18;
  undefined4 uVar5;
  undefined8 uVar4;
  longlong local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@173@gml_Object_oCheckFullScreen_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xe;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0;
  uVar3 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x10;
  uVar4 = CONCAT44(uVar5,DAT_141a57fc0);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_68,0,uVar4,0);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0xd;
  if (cVar1 == '\0') {
    uVar3 = 0x3ff00000;
  }
  local_78 = (ulonglong)uVar3 << 0x20;
  local_res18 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar5,DAT_141a57f00),&local_res18);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

