// gml_RoomCC_rmSqualor14_0_Create @ 0x140669f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_RoomCC_rmSqualor14_0_Create(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined4 *local_38 [2];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_60 = "gml_RoomCC_rmSqualor12_0_Create";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_58 = 1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00f58);
  uStack_1c = 0xf;
  local_28 = 0x100000000000095;
  local_e8 = 0x95;
  uStack_e4 = 0x1000000;
  uStack_e0 = uStack_20;
  uStack_dc = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_50 = local_a8;
  local_e8 = _DAT_1419e7130;
  uStack_e4 = uRam00000001419e7134;
  uStack_e0 = uRam00000001419e7138;
  uStack_dc = uRam00000001419e713c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_48 = local_98;
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar3,&local_50);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != local_88) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
  }
  local_40 = local_88;
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar4,DAT_1419fdca8),&local_40);
  if (puVar2 != local_78) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_e8);
  }
  local_38[0] = local_78;
  FUN_140e63610(param_1,param_2,&local_b8,1,uVar1,local_38);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

