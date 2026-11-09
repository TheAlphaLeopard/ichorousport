// gml_Script____struct___287____struct___283_gml_Object_obj_test_Create_0 @ 0x14068b420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___287____struct___283_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___286@___struct___283@gml_Object_obj_test_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x3d;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de10d4) {
    _Init_thread_header(&DAT_141de10d4);
    if (DAT_141de10d4 == -1) {
      DAT_141de1150 = FUN_140e63aa0(DAT_141a021a8);
      _Init_thread_footer(&DAT_141de10d4);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1150);
  local_18 = 0x3e;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46588);
  if (puVar1 != &DAT_141dd51d8) {
    local_48 = _DAT_141dd51d8;
    uStack_44 = uRam0000000141dd51dc;
    uStack_40 = uRam0000000141dd51e0;
    uStack_3c = DAT_141dd51e4;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_18 = 0x3f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x416fe00000000000;
  local_18 = 0x40;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a467b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,&LAB_14068b3f0,param_1);
  if (&local_48 != puVar3) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

