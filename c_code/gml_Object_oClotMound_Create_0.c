// gml_Object_oClotMound_Create_0 @ 0x1408ad470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oClotMound_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_b0 = "gml_Object_oClotCageSmall_Create_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_a8 = 2;
  FUN_140e98b30(param_1,param_2);
  local_a8 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_a8 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0xc008000000000000;
  local_a8 = 7;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_a8 = 8;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 0xf;
  local_108 = 0x1000001000000a1;
  local_e8 = 7.291128972912466e-304;
  uStack_e0 = uStack_100;
  uStack_dc = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_58 = local_98;
  pdVar3 = (double *)
           FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar6,DAT_141a049b8),&local_58);
  uStack_dc = *(uint *)((longlong)pdVar3 + 0xc);
  uStack_e0 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_e8,pdVar3);
  }
  uStack_fc = 7;
  local_108 = CONCAT44(local_108._4_4_,1);
  FUN_1400462a0(&local_e8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  dVar5 = local_e8;
  if ((uStack_dc & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_e8);
  }
  uVar1 = FUN_140e78f00((longlong)dVar5);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = uVar1;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
  local_a8 = 0xb;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  local_108 = CONCAT44(uRam0000000141dc6c54,_DAT_141dc6c50);
  uStack_100 = uRam0000000141dc6c58;
  uStack_fc = uRam0000000141dc6c5c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_58 = local_98;
  local_108 = CONCAT44(uRam00000001419e96a4,_DAT_1419e96a0);
  uStack_100 = uRam00000001419e96a8;
  uStack_fc = uRam00000001419e96ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_50 = local_88;
  local_108 = CONCAT44(uRam00000001419e96b4,_DAT_1419e96b0);
  uStack_100 = uRam00000001419e96b8;
  uStack_fc = uRam00000001419e96bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_108);
  local_48 = local_78;
  local_108 = CONCAT44(uRam00000001419e9694,_DAT_1419e9690);
  uStack_100 = uRam00000001419e9698;
  uStack_fc = uRam00000001419e969c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_108);
  local_40 = local_68;
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)FUN_140e78db0(&local_f8,4,&local_58);
  if (puVar4 != puVar2) {
    local_108 = *puVar4;
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  FUN_140e60910(1);
  local_a8 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

