// gml_Script_anon_547____struct___597_gml_Object_oParisiteLegs_Create_0 @ 0x140baef00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_547____struct___597_gml_Object_oParisiteLegs_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  undefined1 **ppuVar2;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
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
  
  local_30 = "gml_Script_anon@439@___struct___596@gml_Object_oParisiteLegs_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x1f;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x20;
  uStack_4c = 0xf;
  local_58 = 0x100000000000149;
  local_48 = 0x149;
  uStack_44 = 0x1000000;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_48);
  local_res8 = local_78;
  ppuVar2 = &local_res8;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_88,1,ppuVar2);
  local_28 = 0x21;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar1,DAT_141a55540,0x80000000,&local_68,(ulonglong)ppuVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff70 & 0xffffffffffffff00);
  local_48 = _DAT_141dda1d8;
  uStack_44 = uRam0000000141dda1dc;
  uStack_40 = uRam0000000141dda1e0;
  uStack_3c = DAT_141dda1e4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_48);
  local_res8 = local_78;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_88,1,&local_68,&local_res8);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

