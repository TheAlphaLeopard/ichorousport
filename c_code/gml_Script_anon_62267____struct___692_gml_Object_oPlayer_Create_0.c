// gml_Script_anon_62267____struct___692_gml_Object_oPlayer_Create_0 @ 0x140c51dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_62267____struct___692_gml_Object_oPlayer_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_60 = "gml_Script_anon@62096@anon@61003@___struct___692@gml_Object_oPlayer_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xcf3;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xcf4;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_f8);
  local_118 = CONCAT44(uRam0000000141dc7474,_DAT_141dc7470);
  uStack_110 = uRam0000000141dc7478;
  uStack_10c = uRam0000000141dc747c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_50 = local_b8;
  uStack_10c = 0xf;
  local_118 = 0x100000300000039;
  iVar3 = FUN_140e851f0(&local_f8,&local_118,DAT_141955260,0);
  bVar5 = iVar3 != 0;
  if (bVar5) {
    uStack_11c = 0xf;
    local_128 = 0x100000300000020;
    puVar4 = &local_128;
  }
  else {
    uStack_dc = 0xf;
    local_e8 = 0x100000300000022;
    puVar4 = &local_e8;
  }
  uVar2 = uStack_dc;
  uVar1 = uStack_11c;
  local_108 = *(undefined4 *)puVar4;
  uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  if (bVar5) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
  }
  if (!bVar5) {
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_48 = local_a8;
  local_108 = _DAT_1419ecd30;
  uStack_104 = uRam00000001419ecd34;
  uStack_100 = uRam00000001419ecd38;
  uStack_fc = uRam00000001419ecd3c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_40 = local_98;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar6,DAT_141a0a0d8),&local_50);
  uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_128,puVar4);
  }
  uStack_10c = 0;
  local_118 = 0x3ffc000000000000;
  FUN_140042560(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_108 = (undefined4)local_128;
  uStack_104 = local_128._4_4_;
  uStack_100 = uStack_120;
  uStack_fc = uStack_11c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_38 = local_88;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_108);
  local_30 = local_78;
  gml_Script____struct___210_chunk_transition_RoomTransition(param_1,param_2,&local_c8,4,&local_48);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

