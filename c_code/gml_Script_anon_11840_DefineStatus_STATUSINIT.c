// gml_Script_anon_11840_DefineStatus_STATUSINIT @ 0x1405ce4b0

undefined8 *
gml_Script_anon_11840_DefineStatus_STATUSINIT
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_res18 = 0;
  local_d0 = "gml_Script_anon@11605@DefineStatus@STATUSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x209;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x20b;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_f8,local_res8,local_res10);
  FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_108,local_res8,local_res10);
  plVar5 = local_res8;
  FUN_140e87170(uVar3,DAT_141a02ee8,0x80000000,&local_128,local_res8,local_res10);
  uVar6 = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_148 = local_f8;
  uStack_140 = uStack_f0;
  uStack_13c = uStack_ec;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_78 = local_b8;
  local_148 = local_108;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_70 = local_a8;
  uStack_12c = local_11c;
  uStack_130 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  local_res18 = 1;
  uStack_13c = 7;
  local_148 = CONCAT44(local_148._4_4_,5);
  FUN_1400462a0(&local_138,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = local_138;
  uStack_140 = uStack_130;
  uStack_13c = uStack_12c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_148);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_68 = local_98;
  uStack_13c = 0xf;
  local_148 = 0x100000000000091;
  local_138 = 0x100000000000091;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  local_60 = local_88;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_e8,4,CONCAT44(uVar6,DAT_141a02e88),&local_78);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_c8 = 0x20d;
      uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f440);
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      FUN_140e87170(uVar3,DAT_141a0a828,0x80000000,&local_118,local_res8,local_res10);
      FUN_140e609c0(local_res8);
      if (&local_118 != puVar4) {
        local_148 = local_118;
        uStack_140 = uStack_110;
        uStack_13c = uStack_10c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_148);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

