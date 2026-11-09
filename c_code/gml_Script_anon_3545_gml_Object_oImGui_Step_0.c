// gml_Script_anon_3545_gml_Object_oImGui_Step_0 @ 0x140b240d0

/* WARNING: Removing unreachable block (ram,0x000140b244df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_3545_gml_Object_oImGui_Step_0(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined1 *local_res18;
  longlong local_res20;
  undefined4 uVar7;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [12];
  byte local_84;
  ulonglong local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oImGui_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_90,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_48 = 4;
  puVar1 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3958);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02758);
  FUN_140e609c0(param_1);
  if (puVar2 != &DAT_1419df7b0) {
    local_68 = (uint)DAT_1419df7b0;
    uStack_64 = DAT_1419df7b0._4_4_;
    uStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 7;
  lVar3 = FUN_140e4cb40(DAT_141a618e8 * 8);
  local_res20 = lVar3;
  FUN_141290260(lVar3,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
  local_48 = 8;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 5;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02758);
  local_68 = DAT_141a599d0 & 0xffffff;
  uStack_64 = (int)(DAT_141a599d0 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_64 == 0xf) {
    uStack_64 = 0x4000004;
  }
  else {
    uStack_64 = uStack_64 | 0x1000000;
  }
  uStack_6c = 0xf;
  local_78 = CONCAT44(uStack_64,DAT_141a599d0) & 0xffffffff00ffffff;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_68);
  local_res18 = local_90;
  FUN_140e609c0(param_1);
  puVar5 = (uint *)FUN_140e634e0(param_1,param_2,&local_b0,1,CONCAT44(uVar7,DAT_141a599f0),
                                 &local_res18);
  if (puVar5 != puVar4) {
    local_68 = *puVar5;
    uStack_64 = puVar5[1];
    uStack_60 = puVar5[2];
    uStack_5c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  FUN_140e60910(1);
  if (lVar3 != 0) {
    FUN_140e4cd60(lVar3);
  }
  local_48 = 0xd;
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3938);
  if (puVar6 != &DAT_141dd95d8) {
    local_68 = _DAT_141dd95d8;
    uStack_64 = uRam0000000141dd95dc;
    uStack_60 = uRam0000000141dd95e0;
    uStack_5c = DAT_141dd95e4;
    if ((1 << ((byte)*(undefined4 *)(puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  local_48 = 0xe;
  puVar6 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3968);
  if (puVar6 != &DAT_141dd95d8) {
    local_68 = _DAT_141dd95d8;
    uStack_64 = uRam0000000141dd95dc;
    uStack_60 = uRam0000000141dd95e0;
    uStack_5c = DAT_141dd95e4;
    if ((1 << ((byte)*(undefined4 *)(puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

