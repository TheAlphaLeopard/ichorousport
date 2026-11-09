// gml_Script____struct___534_gml_Object_oEnemySlime_Create_0 @ 0x140a7ac10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___534_gml_Object_oEnemySlime_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong **pplVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffef0;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_c0 = "gml_Script_anon@4423@___struct___534@gml_Object_oEnemySlime_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x102;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_dc = 0;
  local_e8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x103;
  local_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_b8 = 0x105;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_d8);
  local_b8 = 0x106;
  uStack_f0 = CONCAT44(0xd,(undefined4)uStack_f0);
  local_f8 = (longlong *)0x0;
  local_108 = (longlong *)0x0;
  uStack_100 = uStack_f0;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_108);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419f1f08,0x80000000,&local_b0);
  local_b8 = 0x108;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  pplVar5 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  uStack_100._4_4_ = 6;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a828,0x80000000,&local_98,uVar10,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_f8 = local_98;
  uStack_f0 = CONCAT44(uStack_8c,uStack_90);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_58 = local_78;
  local_f8 = (longlong *)CONCAT44(uRam0000000141dd8f7c,_DAT_141dd8f78);
  uStack_f0 = CONCAT44(DAT_141dd8f84,uRam0000000141dd8f80);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  local_50 = local_68;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar11,DAT_141a56cf0),&local_58);
  cVar3 = FUN_140e491e0(uVar4);
  if (cVar3 == '\0') {
    bVar7 = 0;
    uStack_f0 = uStack_f0 & 0xffffffff;
    local_f8 = (longlong *)0x0;
    pplVar8 = (longlong **)&local_f8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5918);
    uStack_100._4_4_ = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_100._0_4_ = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) == 0) {
      local_108 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    pplVar8 = &local_108;
    bVar7 = uStack_f0._4_1_;
  }
  FUN_140e609c0(param_1);
  if (pplVar8 != pplVar5) {
    local_48 = *(undefined4 *)pplVar8;
    uStack_44 = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_40 = *(undefined4 *)(pplVar8 + 1);
    uStack_3c = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar5);
    }
    FUN_140041b80(pplVar5,&local_48);
  }
  if (bVar1) {
    if ((1 << (bVar7 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_b8 = 0x10a;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x3ff0000000000000;
  local_b8 = 0x10b;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_b8 = 0x10c;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_b8 = 0x10d;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

