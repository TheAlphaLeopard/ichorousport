// gml_Script____struct___569_gml_Object_oFakeRot_Create_0 @ 0x140acdd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___569_gml_Object_oFakeRot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script_anon@274@___struct___569@gml_Object_oFakeRot_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xf;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x10;
  local_7c = 0;
  local_88 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_48 = 0x11;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  local_68 = _DAT_1419eb450;
  uStack_64 = uRam00000001419eb454;
  uStack_60 = uRam00000001419eb458;
  uStack_5c = uRam00000001419eb45c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_68);
  local_78 = local_40;
  local_68 = _DAT_1419eb460;
  uStack_64 = uRam00000001419eb464;
  uStack_60 = uRam00000001419eb468;
  uStack_5c = uRam00000001419eb46c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  local_70 = local_30;
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)FUN_140e78db0(&local_98,2,&local_78);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

