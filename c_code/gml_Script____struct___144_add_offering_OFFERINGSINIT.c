// gml_Script____struct___144_add_offering_OFFERINGSINIT @ 0x1403c4e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___144_add_offering_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [64];
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_110 = "gml_Script_Debuff";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0xbc;
  _eh_vector_constructor_iterator_(local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeb38) &&
     (_Init_thread_header(&DAT_141ddeb38), DAT_141ddeb38 == -1)) {
    DAT_141ddead0 = FUN_140e63aa0(DAT_1419f5e28);
    _Init_thread_footer(&DAT_141ddeb38);
  }
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1403c4f58:
    local_138 = (longlong *)*puVar2;
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_b8) goto LAB_1403c4f58;
  }
  local_58 = &local_b8;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
LAB_1403c4fa4:
    local_138 = (longlong *)*puVar2;
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 != &local_a8) goto LAB_1403c4fa4;
  }
  local_50 = &local_a8;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_1403c4ff1:
    local_138 = (longlong *)*puVar2;
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
    if (puVar2 != &local_98) goto LAB_1403c4ff1;
  }
  local_48 = &local_98;
  if (param_4 < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
    if (puVar2 == &local_88) goto LAB_1403c506b;
  }
  local_138 = (longlong *)*puVar2;
  uStack_130 = *(undefined4 *)(puVar2 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_138);
LAB_1403c506b:
  local_40 = &local_88;
  FUN_140e64370();
  gml_Script_anon_4496_Buff_OFFERINGSINIT(param_1,param_2,&local_128,4,&local_58);
  if (DAT_141ddc16c == '\0') {
    uVar3 = FUN_140e63aa0(DAT_1419f5898);
    FUN_140e8da10(param_1,DAT_141ddead0,uVar3);
    FUN_140e64380(DAT_141ddead0,"gml_Script_Debuff");
    FUN_140e64380(param_1,"gml_Script_Debuff");
  }
  FUN_140e643a0(param_1,DAT_141ddead0);
  local_108 = 0xbe;
  puVar4 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6288);
  if (puVar4 != &DAT_141dd29a8) {
    local_138 = (longlong *)CONCAT44(uRam0000000141dd29ac,_DAT_141dd29a8);
    uStack_130 = uRam0000000141dd29b0;
    uStack_12c = DAT_141dd29b4;
    if ((1 << ((byte)*(undefined4 *)(puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  local_108 = 0xbf;
  uStack_12c = 6;
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  local_138 = param_1;
  FUN_140e98ef0(param_1,param_2,uVar1,puVar5,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

