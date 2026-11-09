// gml_Script_anon_83_gml_Object_oTutorialCombat_Create_0 @ 0x140df4680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_83_gml_Object_oTutorialCombat_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_a0 = "gml_Script_anon@1901@gml_Object_oTutorial_Step_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x6c;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  puVar1 = (undefined *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x6d;
  uStack_d0 = CONCAT44(0xd,(undefined4)uStack_d0);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = uStack_d0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_e8);
  uStack_d0._4_4_ = 0xf;
  local_d8 = 0x100000000000106;
  FUN_140e87930(&local_d8,DAT_141a57bb0,0x80000000,&local_b8);
  if ((1 << ((byte)uStack_d0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_98 = 0x6e;
  if (puVar1 != &DAT_141ddbcb8) {
    local_e8 = CONCAT44(uRam0000000141ddbcbc,_DAT_141ddbcb8);
    uStack_e0 = CONCAT44(DAT_141ddbcc4,uRam0000000141ddbcc0);
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  local_98 = 0x6f;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_d0 = CONCAT44(0xf,(undefined4)uStack_d0);
  local_d8 = 0x10000030000001f;
  local_e8 = 0x10000030000001f;
  uStack_e0 = CONCAT44(0xf,(undefined4)uStack_d0);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_48 = local_88;
  local_e8 = CONCAT44(uRam00000001419ee714,_DAT_1419ee710);
  uStack_e0 = CONCAT44(uRam00000001419ee71c,uRam00000001419ee718);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_40 = local_78;
  local_e8 = CONCAT44(uRam00000001419ee704,_DAT_1419ee700);
  uStack_e0 = CONCAT44(uRam00000001419ee70c,uRam00000001419ee708);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  local_38 = local_68;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_e8);
  local_30 = local_58;
  gml_Script____struct___210_chunk_transition_RoomTransition(param_1,param_2,&local_c8,4,&local_48);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

