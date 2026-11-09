// gml_Script____struct___593_gml_Object_oParChest_Create_0 @ 0x140ba49d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___593_gml_Object_oParChest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar5;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_58 = "gml_Script_anon@1756@___struct___593@gml_Object_oParChest_Create_0";
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  local_50 = 0x50;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_50 = 0x51;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56b40);
  uStack_cc = DAT_141dda174;
  uStack_d0 = DAT_141dda170;
  if ((1 << ((byte)DAT_141dda174 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dda168;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dda168);
  }
  uVar5 = uStack_cc;
  local_f8 = (undefined4)local_d8;
  uStack_f4 = local_d8._4_4_;
  uStack_f0 = uStack_d0;
  uStack_ec = uStack_cc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_78 = local_c8;
  if (puVar1 != local_b8) {
    local_f8 = *puVar1;
    uStack_f4 = puVar1[1];
    uStack_f0 = puVar1[2];
    uStack_ec = puVar1[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_f8);
  }
  local_70 = local_b8;
  ppuVar3 = &local_78;
  puVar1 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_48,2,ppuVar3);
  uVar5 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  if (puVar1 != local_a8) {
    local_f8 = *puVar1;
    uStack_f4 = puVar1[1];
    uStack_f0 = puVar1[2];
    uStack_ec = puVar1[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_f8);
  }
  local_68 = local_a8;
  uVar4 = CONCAT44(uVar5,DAT_141a086f8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar4,&local_68);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_88) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_f8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_50 = 0x52;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_98);
  local_50 = 0x53;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_cc = 0xf;
  local_d8 = 0x100000200000080;
  local_f8 = 0x80;
  uStack_f4 = 0x1000002;
  uStack_f0 = uStack_d0;
  uStack_ec = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_78 = local_c8;
  local_f8 = _DAT_1419ec790;
  uStack_f4 = uRam00000001419ec794;
  uStack_f0 = uRam00000001419ec798;
  uStack_ec = uRam00000001419ec79c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  local_70 = local_b8;
  local_f8 = _DAT_1419df7a0;
  uStack_f4 = uRam00000001419df7a4;
  uStack_f0 = uRam00000001419df7a8;
  uStack_ec = uRam00000001419df7ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_f8);
  local_68 = local_a8;
  FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar5,DAT_141a0a2e8),&local_78);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return param_3;
}

