// gml_Script_anon_2610____struct___536_gml_Object_oEnemySpider_Create_0 @ 0x140a81420

undefined8 *
gml_Script_anon_2610____struct___536_gml_Object_oEnemySpider_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___535@gml_Object_oEnemySpider_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x4e;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de259c) {
    _Init_thread_header(&DAT_141de259c);
    if (DAT_141de259c == -1) {
      DAT_141de25a8 = FUN_140e63aa0(DAT_1419f2028);
      _Init_thread_footer(&DAT_141de259c);
    }
  }
  FUN_140e643a0(param_1,DAT_141de25a8);
  local_18 = 0x50;
  uStack_3c = 0xf;
  local_48 = 0x100000100000186;
  local_38 = 0x186;
  uStack_34 = 0x1000001;
  uStack_30 = uStack_40;
  uStack_2c = 0xf;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_38);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_58);
  local_18 = 0x51;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_68);
  local_18 = 0x53;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

