// gml_Object_oRoomDoor_Step_2 @ 0x140d390f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oRoomDoor_Step_2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_c0 = "gml_Script_anon@92@gml_Object_oRoomDoor_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 6;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 7;
  uStack_fc = 0xd;
  local_108 = 0;
  if (&local_108 != puVar1) {
    local_d8 = 0;
    uStack_d0 = uStack_100;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 9;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011b8);
  local_108 = CONCAT44(uRam0000000141dc75f4,_DAT_141dc75f0);
  uStack_100 = uRam0000000141dc75f8;
  uStack_fc = uRam0000000141dc75fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_58 = local_a8;
  if (puVar1 != &local_98) {
    local_108 = *puVar1;
    uStack_100 = *(undefined4 *)(puVar1 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
  }
  local_50 = &local_98;
  local_108 = CONCAT44(uRam00000001419ed784,_DAT_1419ed780);
  uStack_100 = uRam00000001419ed788;
  uStack_fc = uRam00000001419ed78c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_48 = local_88;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar2,DAT_141a0a0d8),&local_58);
  uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_d8,puVar1);
  }
  uStack_fc = 0;
  local_108 = 0x3ff8000000000000;
  FUN_140042560(&local_d8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_d8;
  uStack_100 = uStack_d0;
  uStack_fc = uStack_cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_108);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_40 = local_78;
  local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_108);
  local_38 = local_68;
  gml_Script____struct___210_chunk_transition_RoomTransition(param_1,param_2,&local_e8,4,&local_50);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

