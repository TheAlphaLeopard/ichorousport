// gml_Script_anon_6296____struct___129_JUKEBOX_system @ 0x140398950

undefined8 *
gml_Script_anon_6296____struct___129_JUKEBOX_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@6034@anon@5904@___struct___129@JUKEBOX_system";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xe2;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
    FUN_140e87440(&DAT_1419df7b0,DAT_141a580f0,0x80000000,&local_48,
                  in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                  in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
  }
  else {
    FUN_140e87440(*(undefined8 *)(param_5 + 8),DAT_141a580f0,0x80000000,&local_48,
                  in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                  in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
    puVar2 = *(undefined8 **)(param_5 + 8);
  }
  uVar1 = FUN_140069500(puVar2);
  FUN_140e63610(uVar1,param_2,&local_38,0,&local_48,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

