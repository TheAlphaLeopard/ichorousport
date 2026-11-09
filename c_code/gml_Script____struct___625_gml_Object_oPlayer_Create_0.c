// gml_Script____struct___625_gml_Object_oPlayer_Create_0 @ 0x140bee5d0

undefined8 *
gml_Script____struct___625_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@3836@___struct___625@gml_Object_oPlayer_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0xcd;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uStack_4c = 0xf;
  local_58 = 0x10000010000011b;
  local_48 = 0x11b;
  uStack_44 = 0x1000001;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e86c30(uVar1,DAT_141a0a728,0x80000000,&local_68);
  local_28 = 0xce;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar1,DAT_141a0cfc8,0x80000000,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

